#include <stdio.h>

int main(void)
{
	int num;

	printf("Enter your number;\n");
	scanf("%d", &num);
	if (num != 0)
	{
	printf("Your number is not 0\n");
	}
	else
	{
	printf("Your number is zero\n");
	}
	return (0);
}
