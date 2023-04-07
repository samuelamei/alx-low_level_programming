#include "main.h"


/**
*a function that returns the number of bits you would need to flip to get from one number to another.
*/


unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
unsigned long int ans = n ^ m;
unsigned int i = 0;
while (ans != 0)
{
 i++;
 ans &= (ans - 1);
}
return i;
}

