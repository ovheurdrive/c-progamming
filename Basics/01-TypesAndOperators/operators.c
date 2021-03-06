#include <stdlib.h>
#include <stdio.h>

// There are three types of operators

(  ) // parenthesis
() [] . -> // call, index, struct member, struct pointer on member

// Unary Operators ( takes one argument )

! // boolean negate
~ // binary negate
++ -- // incrementation
- // negate
(type) // cast
* // dereferencing
& // referencing
sizeof // return the size of a variable


// Binary Operators

+ - * / % // arithmetics operators
>> << // binary shift
< <= >= > // comparison
== != // equality
& // binary AND
^ // binary XOR
| // binary OR
&& // logical AND
|| // logical OR

= += -= *= /= %= ^= &= |= >>= <<= // affectation
, // sequencing

// Ternary Operators

? : // if ... then ... else
// Example :

a = x < y ? x : y; // a contains the min between x and y 
