#include"main.h"

/**
 * Description - prints the alphabets 10 times
*/

void print_alphabet(void)
{
	int ch, count;

	for (count = 0; count <= 9; ++count)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n');
	}
}
