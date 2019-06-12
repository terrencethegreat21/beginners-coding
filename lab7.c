#include <stdio.h>

//	Name: Joelynn Carter
// Group: 9 
//	Section:	Lab 504/Lecture 004
//	Problem:	Lab 7 
// Date:	03/18/2019

void moveDiscs(int n, int a, int c, int b) 
{ 
	//we use recursion because we are essentially solving the same problem again and again
    if (n == 1) 
    { 
        printf("\n Move disk 1 from pole %d to pole %d", a, c); 
        return; 
    } 
    moveDiscs(n-1, a, b, c); 
    printf("\n Move disk %d from pole %d to pole %d", n, a, c); 
    moveDiscs(n-1, b, c, a); 
	
} 

int main() 
{ 
	int n; //n is the number of discs
	printf("Tell me how many discs: ");
	scanf("%d", &n);
	if (n <= 0){
		printf("Error input must be at least 1 disc");
	}
	else{
    moveDiscs(n, 1, 3, 2); // a, b, and c are poles
    }  
    return 0; 
} 
