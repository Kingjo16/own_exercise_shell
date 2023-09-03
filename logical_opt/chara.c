#include <stdio.h>
int main(void)
{
	char ch;

	printf("enter a character:\n");
	scanf("%c", &ch);
	if (ch == 'y' || ch == 'Y')
	{
	printf("The character is y or Y\n");
	}
	else
	{
		printf("tThe given Character is not y or Y\n");
	}
	return (0);
}
