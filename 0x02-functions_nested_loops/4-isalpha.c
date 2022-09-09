#include "main.h"

/**
  * _isalpha - alpha check
  * @c: Check this char
  *
  * Return: 1 alphabet char or 0 for anyother
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
