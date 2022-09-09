#include "main.h"

/**
  * _islower - Checks for small letters
  * @c: Check this char
  *
  * Return: 1 lowercase or 0 for anyother
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
