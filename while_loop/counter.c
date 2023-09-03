#include <stdio.h>

int main(void)
{
	int n, i = 1;
	printf("Enter your number for the counter to start:\n");
	scanf("%d", &n);
	while (i <= n)
	{
		printf("%d\n", i);
		i++;
	}

	return (0);
}
