#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - A program that multiplies two numbers.
* @argc: The number of command line arguments.
* @argv: Array containing the program command line arguments.
* Return: 0 -> Success.
*/
int main(int argc, char **argv)
{
if (argc < 3)
printf("Error\n");
else
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}
