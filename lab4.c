#include <stdio.h>

//	Name: Joe Carter
//Group:9 
//	Section:	Lab 504/Lecture 004
//	Problem:	Lab 1 
// Date:	02/19/2019



int main()
{
 int taxmoney;
 int amounttopay;
   printf("please enter your taxable income: ");
   scanf("%d", &taxmoney);
 if (taxmoney < 750)
   {
     amounttopay = taxmoney*0.01;
   }
 else if (taxmoney >= 750 && taxmoney < 2250)
   {
     amounttopay = 7.50 + (0.02*taxmoney);
   }
 else if (taxmoney >= 2250 && taxmoney < 3750)
   {
     amounttopay = 37.50 + (0.03*taxmoney);
   }
 else if (taxmoney >= 3750 && taxmoney < 5250)
   {
     amounttopay = 82.50 + (0.04*taxmoney);
   }
 else if (taxmoney >= 5250 && taxmoney <= 7000)
   {
     amounttopay = 142.50 + (0.05*taxmoney);
   }
 else if (taxmoney > 7000)
   {
     amounttopay = 230 + (0.06*taxmoney);
   }

printf("you have to pay this much in taxes %d", amounttopay);

  int menu;
  int x = 1;
  while (x == 1)
  {
    printf("\n\n");
    printf("0) Check Balance. \n");
    printf("1) Deposit. \n");
    printf("2) Change Password. \n");
    printf("3) Transfer Money. \n");
    printf("4) Exit. \n");
    printf("please type a number 0 to 4 to select a menu item: ");
    scanf("%d", &menu);
    switch(menu)
    {
      case 0:
        printf("check balance\n");
        break;
      case 1:
        printf("deposit\n");
      case 2:
       printf("change password\n");
       break;
      case 3:
        printf("transfer money\n");
        break;
      case 4:
        x = 2;
        break;
       default:
       break;
    }
printf("press any key to continue use, or enter if you are sure you want to exit");
getchar();
getchar();
    
  }

}
