#include "main.h"
#include <stddef.h>
char *_strchr(char *s, char c){
	int i;
	for (i = 0; s[i] != 0; i++){
		if (s[i] == c){
			break;
		}
	}
	if (s[i] != '\0'){
		return &s[i];
		i++;
	}	
	else
		return NULL;
	return NULL;
}
