#include <stdio.h>
#include <string.h>

// Name: Joe Carter
// Group:
// Section: Lab 504/Lecture 004
// Problem: Lab 3
// Date: 02/12/2019

void reverse(char*, int, int);

int main()
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
	printf("Enter the first (single): ");
	scanf("%1d", &d);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	char a[100];
	printf("Enter the number to be reversed ");
	scanf("%s", a);
	reverse(a, 0, strlen(a)-1);
	printf("%s\n", a);

	return 0;


}

void reverse(char *x, int begin, int end)
{
	char c;
	if (begin >= end)
		return;

	c		= *(x+begin);
	*(x+begin)	= *(x+end);
	*(x+end)	=c;

	reverse(x, ++begin, --end);


}



