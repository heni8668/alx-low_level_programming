#include "holberton.h"
/**
* _strncat - concatenate strings, defining the size of second string.
* @dest: string with concatenation
* @src: string to be concatenated
* @n: size of second string
* Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
{
int lengthD, lengthS;

lengthD = 0;
lengthS = 0;

while (*(dest + lengthD) != '\0')
lengthD++;

while (*(src + lengthS) != '\0' && lengthD < 97 && lengthS < n)
{
*(dest + lengthD) = *(src + lengthS);
lengthD++;
lengthS++;
}
*(dest + lengthD) = '\0';
return (dest);
}
........2-strncpy.c........
#include "holberton.h"
/**
 * _strncpy - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
