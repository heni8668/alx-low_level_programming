#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
* main - A program that that adds positive numbers.
* @argc: The number of command line arguments.
* @argv: Array containing the program command line arguments.
* Return: 0 -> Success. 1 :If one of the number contains
*symbols that are not digits.
*/
int main(int argc, char **argv)
{
int i = 0, sum = 0, j = 0;

if (argc == 1)
{
printf("%d\n", sum);
} else
{
for (i = 1; i < argc; ++i)
{
for (j = 0; argv[i][j] != 00; j++)
{
if (!isdigit(argv[i][j]) || !isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
