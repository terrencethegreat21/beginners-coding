#include <stdio.h>
#include <limits.h>

//	Name: Joelynn Carter
//Group: 
//	Section:	Lab 504/Lecture 004
//	Problem:	Lab 5 
// Date:	02/26/2019


int main() //will contain two different programs

{
 int loop = 1;
 int userchoice;
 while (loop == 1)
 {
	printf("\n");
  printf("2) Go to question 2\n");
  printf("3) Go to question 3\n");
  printf("4) Exit 4\n");
  scanf("%d", &userchoice);
  
  if (userchoice == 2)  {
    int datatype;
    printf("\nthis will display storage size of types\n");
    printf("0) int type\n");
    printf("1) unsigned int type\n");
    printf("2) shirt type\n");
    printf("3) unsigned short type\n");
    printf("4) long type\n");
    printf("5) unsigned long type\n");
    printf("6) float type\n");
    printf("7) double type\n");
    printf("8) long double type\n");
    printf("please choose an option: ");
    scanf("%d", &datatype);
    printf("\n");
    switch(datatype)
    {
      case 0:
      printf("Storage size for int : %lu \n", sizeof(int));
      break;
      case1:
      printf("Storage size for unsigned int : %lu \n", sizeof(unsigned int));
      break;
      case 2:
      printf("Storage size for short : %lu \n", sizeof(short));
      break;
      case 3:
      printf("Storage size for unsigned short : %lu \n", sizeof(unsigned short));
      break;
      case 4:
      printf("Storage size for long : %lu \n", sizeof(long));
      break;
      case 5:
      printf("Storage size for unsigned long : %lu \n", sizeof(unsigned long));
      break;
      case 6:
      printf("Storage size for float : %lu \n", sizeof(float));
      break;
      case 7:
      printf("Storage size for double : %lu \n", sizeof(double));
      break;
      case 8:
      printf("Storage size for long double : %lu \n", sizeof(long double));
      break;
      default:
      printf("error in input, please try again\n");

     }
    }
	if(userchoice == 3){
         int a[10];
         int sp;
        for(int i=0; i<10; i++){

        printf("gimme input, give me a 0 to reverse order");
        scanf("%d",&a[i]);
        if(a[i]==0){
          sp = i; 
         break;
         }
	}
         int min = a[sp-1];
        for(sp--; sp>=0; sp--){

	if(min>a[sp]){
		min = a[sp];
	}

         printf("%d\n",a[sp]);

         }
         printf("Your minimum is: %d", min);

        
}
   if (userchoice == 4){
        break;
}
  }

return 0;






}