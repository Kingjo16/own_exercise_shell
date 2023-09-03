#include <stdio.h>

int mian (void)
{
	int sum = 0, n, i = 1;
	printf("Enter your number:\n");
	scanf("%d", &n);
	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("Sum = %d\n", sum);
	return (0);

}

