#include "main.h"
#include <stdio.h>
/**
* main - A program that prints all arguments it receives.
* @argc: The number of command line arguments.
* @argv: Array containing the program command line arguments.
* Return: 0 -> Success.
*/
int main(int argc, char **argv)
{
int i = 0;

for (i = 0; i < argc; ++i)
{
printf("%s\n", argv[i]);
}
return (0);
}
