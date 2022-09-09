#include "main.h"
/**
 * printAlphabet - Alphabet in lower cases
 *
 * Return: prints 0 when done
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
