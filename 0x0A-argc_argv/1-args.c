#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments
 *        passed into it
 *
 * @argc: number of arguments passed
 * @argv: holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, m;

	while (i < argc)
	{
		m = i;
		i++;
	}
	printf("%d\n", m);
	return (0);
}
