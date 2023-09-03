#include <stdio.h>

int main(void)
{
	int givenNum, Hour, Min, Sec;

	printf("Input you number:\n");
	scanf("%d", &givenNum);
	Hour = givenNum * 24;
	Min = Hour * 60;
	Sec = Min * 60;
	printf("Your given number has %d Hours, %d Minutes and %d Seconds\n", Hour, Min, Sec);
	return (0);
}
