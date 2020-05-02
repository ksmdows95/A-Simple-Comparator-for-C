#include <stdio.h>

int main()
{
	int a, b, c, big, mid, small;
	char check;
start:
	printf("Lutfen uc sayi girin:");
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
	printf("Cikmak istiyor musunuz?(e/h):");
	scanf_s(" %c", &check);
	switch (check)
	{
	case('e') :
		printf("Gule gule!\n");
		break;
	case('h') :
		goto start;
		break;
	default:
		goto quest;
	}
}