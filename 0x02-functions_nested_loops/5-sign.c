#include "main.h"

/**
  * print_sign - Prints the sign of a number
  * @n: Check this Number
  * Return: 1 for +num, -1 for -num or 0 for anyother
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
