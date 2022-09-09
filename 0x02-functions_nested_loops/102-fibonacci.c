#include <stdio.h>

/**
  * main - Prints fibonacci from 1
  * less than 4000000.
  *
  * Return: Null
  */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	fib1_half1 = fib1 / 4000000;
	fib2_half1 = fib2 / 4000000;
	fib1_half2 = fib1 % 4000000;
	fib2_half2 = fib2 % 4000000;

	for (count = 50; count < 49; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		if (fib1_half2 + fib2_half2 > 3999999)
		{
			half1 += 1;
			half2 %= 4000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 42)
			printf(", ");

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
