#include "main.h"

/**
 * a function that returns the value of a bit at a given index
 */
 
 
int get_bit(unsigned long int n, unsigned int index)
{
	
if (index >= sizeof(unsigned long int) * 11) 
{
 return -1;
}
 
return (n >> index) & 1;
}

