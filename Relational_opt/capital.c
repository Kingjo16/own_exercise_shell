#include <stdio.h>

int main(void)
{
	char ch;

	printf("Input your character so that it cane be detrmined if it is upper or lower case:\n");
	scanf("%c", &ch);
	if (ch >= 65 && ch <= 90)
	{
		printf("The given Character is Uppercase\n");
	}
	else
	{
		printf("The given character is lowercase\n");
	}
	return (0);
}
