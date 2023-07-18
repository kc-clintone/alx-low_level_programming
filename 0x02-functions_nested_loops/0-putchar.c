#include"main.h"

/**
 * main - Entry point of this program
 *
 * Description: A progam that prints '_putchar' to
 * the standard output
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
