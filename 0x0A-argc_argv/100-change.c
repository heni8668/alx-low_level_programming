#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
* main - A program that prints the minimum number
*of coins to make change for an amount of money.
* @argc: The number of command line arguments.
* @argv: Array containing the program command line arguments.
* Return: 0 -> Success. 1 :If one of the number contains
*symbols that are not digits.
*/

int main(int argc, char *argv[])
{
int cash, a = 0, i;
int coin[5] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
cash = atoi(argv[1]);
if (cash <= 0)
{
printf("0\n");
return (1);
}
else
{
for (i = 0; i < 5; i++)
{
if (cash >= coin[i])
{
a = a + (cash / coin[i]);
cash = cash % coin[i];
}
if (cash == 0)
{
printf("%d\n", a);
return (0);
}
}
}
return (0);
}
