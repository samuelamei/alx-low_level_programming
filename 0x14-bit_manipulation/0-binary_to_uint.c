#include "main.h"

/**
*binary_to_uint
*
*/


unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int ans = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		ans = 2 * ans + (b[i] - '0');
	}

	return (ans);
}

