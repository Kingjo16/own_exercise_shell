#include <stdio.h>

/**
 * main - which prints different type of arthimatic fun
 *
 * Return: (0) sucess
 */

int main(void)
{
	int x;
	int y;

		x = 5;
		y = 3;

	printf("x=%d\n", x);
	printf("y=%d\n", y);

	int sum = x + y;

	printf("Sum of the numbers x and y is %d\n", sum);

	int sub = x - y;

		printf("subtracting the two numbers will give %d\n", sub);

	int product = x * y;

	printf("multiplying x and y will give %d\n", product);

	int dividing = x / y;

	printf("dividing x and y will give %d\n", dividing);

	int remainder = x % y;

	printf("the rminder at last will be %d\n", remainder);

	return (0);
}
