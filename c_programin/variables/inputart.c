#include <stdio.h>

/**
 * main - takes an input from thr user as num1 and num2
 * Add the numbers and print the sum
 * Subtract the smaller number from the larger one
 * Multiply the numbers and print the product
 * Divide the larger number by the smaller one and print the quotient
 * Find remainder when the larger number is divided by the smaller one
 *
 * Return: on success (0)
 */

int main(void)
{
	int num1, num2;

	printf("enter your 2 integers:\n");
	scanf("%d%d", &num1, &num2);
	printf("Your first number is %d\n", num1);
	printf("Your second number is %d\n", num2);

	int sum = num1 + num2;

	printf("The sum of your numbers is %d\n", sum);
		int diff;
	if (num1 > num2)
	{
	diff = num1 - num2;
	}
	else
	{
	diff = num2 - num1;
	}

	printf("Your posetive difference is %d\n", diff);

	int mult = num1 * num2;
		printf("the product of the two given number is %d\n", mult);
	int div;

	if (num1 > num2)
	{
		div = num1 / num2;
	}
	else
	{
		div = num2 / num1;
	}
	printf("Quotient of you larger number by smaller number is %d\n", div);

	int reminder;

	if (num1 > num2)
	{
		reminder = num1 % num2;
	}
	else
	{
		reminder = num2 % num1;
	}
	printf("you reminder is %d\n", reminder);

	return (0);
}
