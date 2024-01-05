#include "main.h"

/**
 * *_strcat - Concatemates two strings
 * @dest: The destination string
 * @src: The source string
 * Rerurn: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int k, r;

k = 0;
r = 0;

while (dest[k] != '\0')
{
	k++;
}

while (src[r] != '\0')
{
	dest[k] = src[r];
	k++;
	r++;
}
dest[k] = '\0';
return (dest);
}
