#include <stdio.h>

int main()
{
	int a, b, c, big, mid, small;
	char check;
start:
	printf("Please enter three numbers:");
	scanf_s("%d %d %d", &a, &b, &c);
	if (b > a)
	{
		big = b;
		small = a;
		if (c > big)
		{
			mid = big;
			big = c;
			printf("Big number: %d\nMiddle number: %d\nSmall number: %d\n", big, mid, small);
		}
		else
		{
			if (c < small)
			{
				mid = small;
				small = c;
				printf("Big number: %d\nMiddle number: %d\nSmall number: %d\n", big, mid, small);
			}
			else
			{
				mid = c;
				printf("Big number: %d\nMiddle number: %d\nSmall number: %d\n", big, mid, small);
			}
		}
	}
	else
	{
		big = a;
		small = b;
		if (c > big)
		{
			mid = big;
			big = c;
			printf("Big number: %d\nMiddle number: %d\nSmall number: %d\n", big, mid, small);
		}
		else
		{
			if (c < small)
			{
				mid = small;
				small = c;
				printf("Big number: %d\nMiddle number: %d\nSmall number: %d\n", big, mid, small);
			}
			else
			{
				mid = c;
				printf("Big number: %d\nMiddle number: %d\nSmall number: %d\n", big, mid, small);
			}
		}
	}
quest:
	printf("Would you like to exit?(y/n):");
	scanf_s(" %c", &check);
	switch (check)
	{
	case('y') :
		printf("Gule gule!\n");
		break;
	case('n') :
		goto start;
		break;
	default:
		goto quest;
	}
}
