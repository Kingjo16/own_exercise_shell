#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("Enter you two number for relational operation check:\n");
	scanf("%d%d", &num1, &num2);
	if (num1 > num2)
	{
	printf("%d is Greater than %d\n", num1, num2);
	}
	if (num1 < num2)
	{
		printf("%d is Less than %d\n", num1, num2);
	}
	if (num1 == num2)
	{
		printf("The above Numbers are equal\n");
	}
	return (0);
}
