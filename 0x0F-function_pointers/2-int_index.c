#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: input array
* @size: size of the array
* @cmp: pointer to function that compares values
* Return: index of integer if successful, -1 if not 
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size > 0 && array && size && cmp)
for (i = 0; i <= size; i++)
if (cmp(array[i]))
return (i);

return (-1);      
}
