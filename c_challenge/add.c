#include <stdio.h>

/**
 * add - this function adds and return the sum of two
 * operands.
 *
 * @a: this would be the operand.
 *
 * @b: this is the secound operand to be summed.
 *
 * Return: Always returns 0.
 */

int add(int a, int b)
{
	int sum = a + b;

	printf("The sum of %d and %d is : %d\n", a, b, sum);
	return (0);
}
