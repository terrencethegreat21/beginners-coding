#include <stdio.h>


// Name: Joe Carter
// Group:
// Section: Lab 504/Lecture 004
// Problem: Lab 1
// Date: 02/05/2019
int looptimes=0;
int main()
{

int month;
int year;
int day;
printf("Enter date here in the form of MM/DD/YYYY:\n");
scanf("%d/%d/%d", &year,&month,&day);
printf("%.2d%.2d%.2d",day,month,year);


printf("\n");


int numrepeat;
printf("important message needs to be repeated m times, enter the number m here:\n");
scanf("%d",&numrepeat);
looptimes=numrepeat;

q2b(numrepeat);


return 0;

}
void q2b(int numrepeat)

{
if (numrepeat>0)
{
	printf("important message needs to be repeated %d\n",looptimes);
	q2b(numrepeat-1);
 

}
}