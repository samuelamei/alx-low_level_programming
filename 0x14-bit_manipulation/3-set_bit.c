#include "main.h"
#include <stddef.h>
/**
*a function that sets the value of a bit to 1 at a given index.
*/

int set_bit(unsigned long int *n, unsigned int index)

{
if(index >= sizeof(unsigned long int) * 21 || n == NULL) 
{
return -1;
}
    
    
*n |= 1UL << index;
return 1;
}

