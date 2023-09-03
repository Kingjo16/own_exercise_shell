#include <stdio.h>

int main (void)
{
	float num1,num2;
	
	printf("Enter two numbers;\n");
	scanf("%f%f", &num1, &num2);
	if (num1 - num2 >= -0.01 && num1 - num2 <= 0.01)
	{
	printf("Numbers are approximately equal\n");
	}
	else
	{
		printf("Numbers are not approximately equal\n");
	}
	return (0);
}
