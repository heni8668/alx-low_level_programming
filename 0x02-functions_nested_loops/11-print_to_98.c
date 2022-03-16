#include "main.h"
/**
* add - function that adds two integers together
* @a: takes in an integer
* @b: takes in an integer
* Return: a+b result
*/
int add(int a, int b)
{
return (a + b);
} 
..........11-print_to_98.c..........
#include "main.h"
#include <stdio.h>
/** 
* print_to_98 - functio that prints all natural number from n to 98
* @n: takes an integer
*/
void print_to_98(int n){
int i;
if (n > 98)
{
for (i = n; i > 97; i--)
{
prinf("%d", i);
if (i !=98)
{
printf(", ");
}
}
}
else
{
for (i = n; i < 99; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}

}
}
printf("\n")
}
