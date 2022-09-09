#include "main.h"

/**
  * _abs - prints the real value of an integer.
  * @c: The integer to be computed.
  *
  * Return: Authentic number value or 0
  */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
