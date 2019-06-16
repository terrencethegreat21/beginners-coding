#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>


//see comments at end of code for names and scores for your player.txt file

int gambit();
int readyplayerone();

struct Player //this struct makes the entire game possible, do not alter
{
	char name[10];
	int balance;
	int gain;
}; 
int main()
{
 
   struct Player List[10];
   char objectname[] = "player.txt";
   printf("Welcome to the game of craps");

   
   FILE *fp;
   fp = fopen(objectname, "r");
   
   
   if(fp == NULL)
   {
	   printf("error, file not found");  
   }
  for(int i = 0 ; i<10;i++)
  {
	  fscanf(fp,"%s",List[i].name);
	  fscanf(fp,"%d",&List[i].balance);
	  fscanf(fp,"%d",&List[i].gain);
	 
  }
  while (1)
 {
  int userchoice;
  printf("\n");
  printf("Hit 0 to top up balance\n");
  printf("Hit 1 to gamble\n");
  printf("Hit 2 to view top five balance leader board\n");
  printf("Hit 3 to see top 5 winnners\n");
  printf("Hit 4 to exit\n");
  scanf("%d", &userchoice);
  
  if (userchoice == 0) //this code might work for fidning players in option one
  {
	  
	char n[10];
	printf("Enter your name: ");
	scanf("%s", n);
	bool found = false;
	while(!found)
	{
		for(int i=0; i<10;i++)
		{
			if(strcmp(n,List[i].name)==0)
			{
				
				found = true;
				break;
			}
		}
		if(!found)
		{
		printf("Enter your name: ");
		scanf("%s", n);	
		}
	}
	int indexforbalance;
	for(int i =0;i<10;i++)
	{
		if(strcmp(n,List[i].name)==0)
		{
		printf("Your balance is: %d \n", List[i].balance);
		indexforbalance = i; //which "i" is this
		}
		
    }
  int mon;
  printf("How much do you want to add: ");
  scanf("%d", &mon);
  List[indexforbalance].balance+=mon;
  
  printf("New balance = %d",List[indexforbalance].balance);
 } 
 if (userchoice == 1)
 {
	 
	 char n[10];
	 printf("Enter your name: ");
	 scanf("%s", n);
	 int sum, pv;
	 sum = gambit();
	 
	 if (sum == 7 || sum == 11) //game logic
	 {
		 //earn ten dollars
		 printf("You won, don't forget to tip your waitress\n");//add ten dollars to the players account
		 
		 bool found = false;
		while(!found)
		{
			for(int i=0; i<10;i++)
			{
				if(strcmp(n,List[i].name)==0)
				{
					
					found = true;
					break;
				}
			}
			if(!found)
			{
			printf("Enter your name: ");
			scanf("%s", n);	
			}
		}
		int indexforbalance;
		for(int i =0;i<10;i++)
		{
			if(strcmp(n,List[i].name)==0)
			{
			printf("Your balance is: %d \n", List[i].balance);
			indexforbalance = i; //which "i" is this
			}
			
		}
	  List[indexforbalance].balance+=10;
	  List[indexforbalance].gain+=10;
	  printf("New balance = %d",List[indexforbalance].balance);
		 //find name
	 }
	 
	 else if(sum == 4||sum == 5||sum == 6||sum == 8||sum == 9||sum == 10) //game logic
	 {
		 //here players must keep rolling until they either match their score or loses by rolling a seven
		 bool kr = true;
		 pv = sum;
		 printf("your score is:\n%d", pv);
		 printf("\n");
		 while(kr)
		 {
			int sum2;
			sum2 = gambit();
			if(sum2 == 7)
			{
				kr = false;
				printf("better luck next time\n");
				//find name
				
				bool found = false;
				while(!found)
				{
					for(int i=0; i<10;i++)
					{
						if(strcmp(n,List[i].name)==0)
						{
							
							found = true;
							break;
						}
					}
					if(!found)
					{
					printf("Enter your name: ");
					scanf("%s", n);	
					}
				}
				int indexforbalance;
				for(int i =0;i<10;i++)
				{
					if(strcmp(n,List[i].name)==0)
					{
					printf("Your balance is: %d \n", List[i].balance);
					indexforbalance = i; //which "i" is this
					}
					
				}
			  List[indexforbalance].balance-=1;
			  List[indexforbalance].gain-=1;
			  
			  printf("New balance = %d",List[indexforbalance].balance);
				//find name
				break;
			}
			else if(sum2 == pv) //game logic
			{
				kr = false;
				printf("you win\n");//add 10 dollars to the players balance
				
				bool found = false;
				while(!found)
				{
					for(int i=0; i<10;i++)
					{
						if(strcmp(n,List[i].name)==0)
						{
							
							found = true;
							break;
						}
					}
					if(!found)
					{
					printf("Enter your name: ");
					scanf("%s", n);	
					}
				}
				int indexforbalance;
				for(int i =0;i<10;i++)
				{
					if(strcmp(n,List[i].name)==0)
					{
					printf("Your balance is: %d \n", List[i].balance);
					indexforbalance = i; //which "i" is this
					}
					
				}
			  List[indexforbalance].balance+=10;
			  List[indexforbalance].gain+=10;
			  printf("New balance = %d",List[indexforbalance].balance);
				//find name
				break;
			}
			 
		 }
	 }
	 
	 else if (sum == 2 || sum == 3 || sum == 12)
	 {
		 //lose one dollar
		 printf("you lose");

		 bool found = false;
			while(!found)
			{
				for(int i=0; i<10;i++)
				{
					if(strcmp(n,List[i].name)==0)
					{
						
						found = true;
						break;
					}
				}
				if(!found)
				{
				printf("Enter your name: ");
				scanf("%s", n);	
				}
			}
			int indexforbalance;
			for(int i =0;i<10;i++)
			{
				if(strcmp(n,List[i].name)==0)
				{
				printf("Your balance is: %d \n", List[i].balance);
				indexforbalance = i; //which "i" is this
				}
				
			}
		  List[indexforbalance].balance-=10;
		  List[indexforbalance].gain-=10;
		  printf("New balance = %d",List[indexforbalance].balance);
				 //find name
	 }
 }
 if (userchoice == 2)
 {
	 
	 int i, j, a,c, n;
	 n = 10;
	char b[10];
	 for(int i=0; i<n; i++)
	 {
		for(j = i+1; j<n; j++)
		{
			if(List[i].balance < List[j].balance)
			{
				a = List[i].balance;
				List[i].balance = List[j].balance;
				List[j].balance = a;
				
				strcpy(b,List[i].name);
				strcpy(List[i].name , List[j].name);
				strcpy(List[j].name,b);
				
				c = List[i].gain;
				List[i].gain = List[j].gain;
				List[j].gain = c;
			}
		} 
	 }
	 	 printf("The top 5 five players are:\n");
	 	 for(i=0; i<5; i++)
	 	 {
			 printf("Number %d - %s has a balance of %d\n",i+1,List[i].name,List[i].balance);
			 
		 }
 }
 if (userchoice == 3)
 {
	 int i, j, a, n;
	 n = 10;
	char b[10];
	 for(int i=0; i<n; i++)
	 {
		for(j = i+1; j<n; j++)
		{
			if(List[i].gain < List[j].gain)
			{
				a = List[i].gain;
				List[i].gain = List[j].gain;
				List[j].gain = a;
				
				strcpy(b,List[i].name);
				strcpy(List[i].name , List[j].name);
				strcpy(List[j].name,b);
				
			}
		} 
	 }
	 printf("The top 5 five earners are:\n");
	 	 for(i=0; i<5; i++)
	 	 {
			 printf("Number %d - %s has earned %d\n",i+1,List[i].name,List[i].gain);
			 
		 }
 }
 if(userchoice == 4)
 {
	 break;
 }
 

 
}
//new function

//new function
FILE *ofp = fopen(objectname, "w");
for(int i = 0 ; i<10;i++)
{
	  fprintf(ofp, "%s ",List[i].name);
	  fprintf(ofp, "%d " ,List[i].balance);
	  fprintf(ofp, "%d \n",List[i].gain);
	  
}

fclose(ofp);
	return 0;
}

int gambit() //this simulates throwing two six-sided dice
{
	//srand(time(0));
	int x, y, score;
	x = (rand() % 6)+1;
	x = (rand() % 6)+1;
	y = (rand() % 6)+1;
	y = (rand() % 6)+1;
	score = x + y;
	printf("First die: %d\n", x);
	printf("Second die %d\n", y);
	printf("You scored: %d\n", score);
	return score;
}



//use the following line if you would like to display balnce in the top ranking
//("Number %d - %s has a balance of %d\n",i+1,List[i].name,List[i].balance)
//player.txt
//Clint 1008 98 
//Dan 109 19 
//Paul 108 18 
//Sam 106 17 
//Bill 105 16 
//Mary 104 15 
//Hank 103 14 
//John 101 11 
//Dorothy 100 12 
//David 3 45 
