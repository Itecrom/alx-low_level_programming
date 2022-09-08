#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Starts Here
 *
 * Return: 0
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
putchar('\n');

	return (0);
}
