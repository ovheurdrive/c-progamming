#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

/* Constants */
#define NB_WORKERS 30
#define START_QUANTITY 10000
#define SPOT_POS_X 0
#define SPOT_POS_Y 0
#define WIDTH 200
#define HEIGTH 300

/*
Example of multithreading program :
A set of workers retrieving ressources from a spot and moving when
it becomes empty.
All workers stop when the spot is entierly empty.
*/

/* Ressource structure */
typedef struct
{
    int quantity;
    pthread_t ressource_thread;
    pthread_t worker_thread [NB_WORKERS];
    pthread_mutex_t ressource_mutex;
    pthread_cond_t ressource_cond;
    pthread_cond_t worker_cond;
}ressource_t;

/* Position in the ressource spot */
typedef struct
{
    int x;
    int y;
}spot_pos_t;

/* Global variables initialization */
static ressource_t ressource_spot =
{
    .quantity = START_QUANTITY,
    .ressource_mutex = PTHREAD_MUTEX_INITALIZER,
    .ressource_cond = PTHREAD_COND_INITIALIZER,
    .worker_cond = PTHREAD_COND_INITIALIZER,
};

static spot_pos_t position_in_spot = { .x = SPOT_POS_X, .y = SPOT_POS_Y }; 


/*
Function to move in the spot when the case is empty
*/
static void* move_pos(void* p_data)
{
    while( position_in_spot.x <= ((WIDTH)-(SPOT_POS_X)) && position_in_spot.y < ((HEIGTH)-(SPOT_POS_Y)))
    {
        pthread_mutex_lock( &ressource_spot.ressource_mutex );
        pthread_cond_wait( &ressoutce_spot.ressource_cond, &ressource_spot.ressource_mutex );
        ressource_spot.quantity = START_QUANTITY;
        if (position_in_spot.x == ((WIDTH)-(SPOT_POS_X)))
        {
            position_in_spot.y+=1;
            position_in_spot.x=0;
        }
        else
        {
            position_in_spot.x+=1;
        }
        printf("Moving to : (%d,%d)\n", position_in_spot.x, position_in_spot.y);
        pthread_cond_signal( &ressoutce_spot.ressource_cond );
        pthread_mutex_unlock( &ressource_spot.ressource_mutex );

    }
    /* We cancel all the workers when is totally empty */
    if( position_in_spot.x == ((WIDTH)-(SPOT_POS_X)) && position_in_spot.y == ((HEIGTH)-(SPOT_POS_Y)) )
    {
        printf("Ressource spot empty");
        stop();
    }
}

/* Workers function to retrieve ressources */
static void* get_ressource(void* p_data)
{
    pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);
    int worker = (int)p_data;
    while(1)
    {
        sleep((int)rand());
        pthread_mutex_lock( &ressource_spot.ressource_mutex );
        if(ressource_spot.quantity == 0 )
        {
            pthread_cond_signal( &ressource_spot.ressource_cond );
            pthread_cond_wait( &ressource_spot.worker_cond, &ressource_spot.ressource_mutex );
        }
        ressource_spot.quantity -= 100;
        printf("Worker %d got 50, remaining %d at (%d,%d) \n",worker,ressource_spot.quantity,position_in_spot.x,position_in_spot.y);
        pthread_mutex_unlock( &ressource_spot.ressource_mutex );

    }
}

/* Function to cancel all the worker */
static int stop()
{
    int i;
    for( i = 0; i<NB_WORKERS; i++ )
    {
        pthread_cancel( ressource_spot.worker_thread[i]);
    }
    return EXIT_SUCCESS;
}

/* Main function to pop all threads and join them */
int main()
{
    int i = 0;
    int ret = 0;

    printf("Creating ressource thread\n");
    ret = pthread_create( &ressource_spot.ressource_thread, NULL, movepos, NULL );
    if( !ret )
    {
        printf("Creating workers threads\n");
        for( i=0; i<NB_WORKERS; i++)
        {
            ret = pthread_create( &ressource_spot.worker_thread[i], NULL, get_ressource, (void*)i);
            if( ret )
            {
                printf("%s\n", strerror(ret));
            }
        }
    }
    else
    {
        printf("%s\n", strerror(ret));
    }

    /* Joining all workers threads to actualize the spot */
    for( i=0; i<NB_WORKERS; i++)
    {
        pthread_join(ressource_spot.worker_thread[i], NULL);
    }
    pthread_join(ressource_spot.ressource_thread, NULL);

    return EXIT_SUCCESS;
}
