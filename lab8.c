//imports
#include <stdio.h>

//Name: Nolan Getty
//Group: 09
//Section:	Lab 504/Lecture 004
//Problem:	Lab  
//Date:	03/25/2019

int getseries(int *a)
{     int numruns = 0;
      int value = 0;
      for (int i=0;i<10;i++)
      {  
         numruns++;
		   printf("Input values, with the last number being a 0 ");
         scanf("%d",&(*(a+i)));
         if(*(a+i)==0)
         {
            break;
         }
      }
      return numruns;
}

void reverse(int length,int *a)
{     
      printf("\nThe list in reverse is : ");
      for (int i=length-1;i>=0;i--)
      {  
         if(*(a+i)==0)
         {
            continue;
         }  
         else
         {
            printf("%d ",*(a+i));
         }
      }
}

int max(int *a, int length) 
{ 
    int i;
    int max = 0;   
    for (i = 0; i < length; i++)
    { 
        if (*(a+i) > max)
        { 
            max = *(a+i);
        }   
    }        
    return max; 
} 

int main()
{  
   int length = 0;
   int numarray[10];
   length = getseries(numarray);
   reverse(length,numarray);
   int big = max(numarray,length);
   printf("\nThe largest value of the array is: %d",big);
   
}