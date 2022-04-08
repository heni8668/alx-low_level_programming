#include "main.h"
#include <stdlib.h>

/**
*main - multiply two numbers
*@argc:number of elements to evaluate
*@argv:array of positive integers
*Return: an integer
*/
int main(argc, **argv)
{
l = 1;
char err[5] = {'E', 'r', 'r', 'o', 'r')
if (argc != 3)
{
for (i = 0; i < 5; i++)
{
_putchar(err[i]);
}
_putchar('\n');
exit(98);
}
i = 0;

for (j = 1; j < argc; j++)
{
for (k = 0; argv[j][k]; k++)
{
l++;
if (argv[j][k] < '0' || argv[j][k] > '9')
{
for (i = 0; i < 5; i++)
{
_putchar(err[i]);
}
_putchar('\n');
exit(98);
}
}
}
multi_num(l, argc, **argv);
return (0)
}
/**
*multi_num - multiply two numbers
*@c:number of main arguments
*@p:pointer of pointer
*Return: new size of the array
*Return:A pointer to the string with new space in memory
*/

char  *multi_num(int l, int argc, char **argv)
{
char *p;


p = malloc((2 * l * sizeof(char)) + 1);
if (p == NULL)
	return (NULL);

for (i = 1; i < argc; i++)
{

p[i] = ((char *)ptr)[i];
}
free(ptr);
return (p);
}
