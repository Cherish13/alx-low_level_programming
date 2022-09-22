#include "main.h"
/**
 *_strncat - function that will concatenates two strings.
 * it will use at most n bytes from src. src does not need to be
 * null terminated
 * @dest: pointer to the destination string
 * @src: pointer to source string
 * @n: number of bytes to be concatenated.
 *
 * Return: pointer to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
int length, j;
length = 0;
while (dest[length] != '\0')
{
length++;
}
for (j = 0; j < n && src[j] != '\0'; j++, length++)
{
dest[length] = src[j];
}
dest[length] = '\0';
return (dest);
}
