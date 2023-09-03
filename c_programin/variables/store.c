#include <stdio.h>

/**
 * main - Takes amount of money and single item price from the user
 * and prints Number of items that can be bought
 * Total cost if 5 items are bought
 * Amount of money left if they buy items with the given cost
 * Return: 0 (success)
 */

int main(void)
{
	int money, y, x, z;

	printf("Please first input how much a store sells an item for\n");
	       scanf("%d", &money);
		       printf("Please input how much you have so that you would know how many items you could buy\n");
	scanf("%d", &y);
	x = y / (float)money;
	int change = y % money;

	printf("number of items that can be bought by $100 is %d and you will have an change which is $%d\n", x, change);
		int items;

		items = 5 * money;
	printf("Your total cost if you buy 5 items is $%d\n", items);


			return (0);
}
