
#include "main.h"
/**
 * 2-print_alphabet_x10.c - print the alphabets in lower case 10 times.
 * 
 * Return: always -.
 */
 void print_alphabet_x10(void)
 {
 	int i;
 	char c;
 	for (i = 0 i < 10; i++)
 	{
 		for (c = 'a'; c <= 'z'; c++)
 			_putchar(c);
 		_putchar('\n');
 	}
 } 
