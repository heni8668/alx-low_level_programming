#include "main.h"
#include <stdio.h>
/**
* main - program that prints its name, followed by a new line.
* @argc: The number of command line arguments.
* @argv: Array containing the program command line arguments.
* Return: 0 -> Success.
*/
int main(int argc, char **argv)
{
printf("%s\n", *argv);
(void)argc;
return (0);
}
