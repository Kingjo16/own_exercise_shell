#include <stdio.h>
/**
 * main - input a,b and c then it finds the following:
 * Average of the 3 numbers
 * Sum of the 3 numbers
 * Product of the 3 numbers
 * Largest and smallest of the 3 numbers
 * Return: (0) success
 */

int main(void)
{
	int a, b, c;

	printf("please inpute 3 numbers:\n");
	scanf("%d%d%d", &a, &b, &c);

	int sum;

	sum = a + b + c;

	printf("the sum is %d\n", sum);
	int y;

	y = 3;

	float ava = sum / y;
		printf("the avarage of your numbers is %.2f\n", ava);
	int prod;

	prod = a * b * c;
	printf("the product of your number is %d\n", prod);

	int max = a;

	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	int min = a;

	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
		}
	printf("the maximum number is %d\n", max);
	printf("The minimum number is %d\n", min);


	return (0);

}
