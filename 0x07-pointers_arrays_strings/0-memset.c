#include "main.h"
char *_memset(char *s, char b, unsigned int n){
	unsigned int i;
	char *ptr = s;
	for (i = 0; i < n; i++){
		*ptr = b;
		ptr++;
	}
	return s;
}
