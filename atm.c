#include<stdio.h>
#include<stdlib.h>
float balance=1500;
int anotherTransaction;
void transaction()
{
	int choice,amountToWithdraw,amountToDeposit,pin;
	pin:
	printf("enter your pin: ");
	scanf("%d",&pin);
	if(pin==1979){
		printf("welcome XYZ\n");
		printf("Your transactions are constantly verified to ensure security among our users......\n");
	}else if(pin==1985){
		printf("welcome ABC\n");
		printf("Your transactions are constantly verified to ensure security among our users......\n");
	}else if(pin==2003){
		printf("welcome xyz\n");
		printf("Your transactions are constantly verified to ensure security among our users......\n");
	}else if(pin==2007){
		printf("welcome abc\n");
		printf("Your transactions are constantly verified to ensure security among our users......\n");
	}else{
		printf("pin is incorrect , please enter correct pin\n");
		goto pin;
	}
	printf("enter any key to continue\n");
	getch();
	system("CLS");	
	printf("enter your choice\n");
	printf("1.withdraw\n");
	printf("2.deposit\n");
	printf("3.balance\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		
		printf("enter amount to withdraw: ");
		scanf("%d",&amountToWithdraw);
		if(amountToWithdraw > balance){	
			system("CLS");
			printf("----------------------------------------------------\n");
			printf("there is insufficent balance in your account");
		    printf("\n\ndo want another transaction?\npress 1 to proceed and 2 to exit\n\n");
			scanf("%d",&anotherTransaction);
			if(anotherTransaction==1){
				transaction();
			}
			}else{
				balance=balance-amountToWithdraw;
				system("CLS");
			    printf("----------------------------------------------------\n");
				printf("\namount withdrawn = %d\n",amountToWithdraw);
				printf("your new balance after transaction is =%f\n",balance);
				printf("\n\ndo want another transaction?\npress 1 to proceed and 2 to exit\n\n");
			    scanf("%d",&anotherTransaction);
			    if(anotherTransaction==1){
				        transaction();
			}
			}
			break;
			
		case 2:
		
		printf("please enter amount to be deposit: ");
		scanf("%d",&amountToDeposit);
		balance=balance+amountToDeposit;
		system("CLS");
		printf("----------------------------------------------------\n");
		printf("your new balance after transcation is =%f",balance);
        printf("\n\ndo want another transaction?\npress 1 to proceed and 2 to exit\n\n");
			scanf("%d",&anotherTransaction);
			if(anotherTransaction==1){
				transaction();
			}
			break;
			
	   case 3:
	   system("CLS");
       printf("----------------------------------------------------\n");
	   printf("your bank balance is =%f",balance);
	   printf("\n\n do want another transaction?\npress 1 to proceed and 2 to exit \n\n");
			scanf("%d",&anotherTransaction);
			if(anotherTransaction==1){
				transaction();
			}
			break;	
		}
	}
	
	int main()
	{
		transaction();
		return 0;
	}
				
