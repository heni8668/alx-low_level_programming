#include "main.h"

/**
* main - check the code for Holberton School students.
* swap_int - swap the number
* @a - number 
* @b - number
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
