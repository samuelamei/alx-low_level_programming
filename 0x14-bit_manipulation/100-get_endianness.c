#include "main.h"


/**
*a function that checks the endianness.
*/


int get_endianness(void)
{
unsigned int num = 0x01020303;
unsigned char *link = (unsigned char *)&num;
if (*link == 0x03) {
return 1; 
} else {
return 0;  
}
}

