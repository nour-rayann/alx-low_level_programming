#include "main.h"
/** The _memset() function fills the first n bytes of the memory area
 *  pointed to by s with the constant byte b
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}

