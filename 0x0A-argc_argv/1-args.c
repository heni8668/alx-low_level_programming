#include "main.h"
#include <stdio.h>
/**
* main - A program that prints the number of arguments passed into it.
* @argc: The number of command line arguments.
* @argv: Array containing the program command line arguments.
* Return: 0 -> Success.
*/
int main(int argc, char **argv)
{
printf("%d\n", argc - 1);
(void)argv;
return (0);
}
