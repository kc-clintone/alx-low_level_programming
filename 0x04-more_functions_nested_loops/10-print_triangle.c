#include "main.h"

/**
 * print_triangle - prints a right-angled
 * triangle using '#'
 *
 * @size: function parameter
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	if (size <= 0)
		return;
	for (int row = 1; row <= size; row++)
	{
		int spaces = size - row;
		int hashes = row;
		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}
		while (hashes > 0)
		{
			_putchar('#');
			hashes--;
		}
		_putchar('\n');
	}
}

