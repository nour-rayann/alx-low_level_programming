#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: array holding binary number
 * Return: number or 0
*/

unsigned int binary_to_uint(const char *b)
{
		unsigned int num = 0, len, convert = 1;

		if (b)
		{
			for (len = 0; b[len] != '\0'; len++)
			;
			while (len > 0)
			{
				len--;
				if (b[len] != '0' && b[len] != '1')
					return (0);
				if (b[len] == '1')
				{
					num = num + convert;
				}
				convert = convert * 2;
			}
		}
		return (num);
}
