#include <stdio.h>

/**
 * main - check wheter two int. are odd or not
 * Return: 0 (success)
 */

int main(void)
{

	int x, y;

	printf("Please input two numbers:");
	scanf("%d%d", &x, &y);
	if (x % 2 != 0 && y % 2 != 0)
	{
	printf("bothe are odd\n");
	}
	else
	{
		printf("Bothe number are not odd\n");
	}
	return (0);
}
