#include "search_algos.h"
#include <unistd.h>
/**
 * print_array - Current Part process.
 *
 * @array: First elem pointer
 * @first: First elem index
 * @last: last element to display
 */
void print_array(int *array, size_t first, size_t last)
{
	printf("Searching in array: %d", array[first]);
	first++;
	while (first <= last)
	{
		printf(", %d", array[first]);
		first++;
	}
	printf("\n");
}

/**
 * advanced_binary_search - In between process
 *
 * @array: First elem pointer
 * @start: first element index
 * @end: number of elements in array
 * @value: value to search for
 *
 * Return: first position of value in array
 */

int advanced_binary_search(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	if (end >= start)
	{
		print_array(array, start, end);

		if (array[start] == value)
			return (start);

		mid = (start + end) / 2;

		if (array[mid] == value && array[mid - 1] != value)
			return (mid);
		if (array[mid] >= value)
			return (advanced_binary_search(array, start, mid, value));
		if (array[mid] < value)
			return (advanced_binary_search(array, mid + 1, end, value));
	}
	return (-1);
}

/**
 * advanced_binary - initial process
 *
 * @array: pointer
 * @size: number of elements
 * @value: Searched value
 *
 * Return: index of value or (-1) if not exist
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (size > 0)
		return (advanced_binary_search(array, 0, size - 1, value));
	return (-1);
}

