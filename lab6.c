#include <stdio.h>
#include <stdbool.h>

//	Name: Joelynn Carter
// Group: 9 
//	Section:	Lab 504/Lecture 004
//	Problem:	Lab 6 
// Date:	03/05/2019

void getSeries (int[]);
int main ()
{
	
	int user[10];
	getSeries(user);
	
		
		

}

void getSeries(int user[10])
{

	int j = 0;
	
	for(int i=0; i<10; i++)
	{
	j++;
	printf("Gimme input, last number must be 0: ");
	scanf("%d", &user[i]);
	if(user[i]==0){
	break;
	}
	
	}
	bool k = false;
	int m;
	printf("Give me a number to search for: ");
	scanf("%d", &m);
	for(j--; j>=0;j--){
		if(m==user[j]){
		k=true;

		}	
	}
	if(k==true){
	printf("I found it");
	}
	else{
	printf("m not found");

	}





}
