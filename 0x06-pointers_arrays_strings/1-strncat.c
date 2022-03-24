#include "main.h"
/**
*_strncat - A function that concatenates two strings.
*
*@dest: Pointer to the array.
*@src: Pointer to the array.
*@n: number of bytes to copy.
*Return: Pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int lenDest = _strlen(dest);
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[lenDest + i] = src[i];
		i++;
	}
	return (dest);
}
/**
* _strlen - function that that returns the length of a string.
* @s : pointer to a string.
* Return: string lenght
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
