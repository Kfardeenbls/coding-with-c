#include <stdio.h>

int main()
{
  //code
  int balance_checking = 10000, balance_withdrawl, cash_deposite, ca, da;
  int choice;
  int pin;

  printf("*****************Welcome*****************\n");

  do
  {
    printf("Please enter the pin or enter 0 to exit\n");
    scanf("%d", &pin);

    if (pin != 4321)
    {
      printf("please enter the valid pin\n");
    }
    else
    {
      do
      {
        printf("\n**********\nPlease enter the choice:\n1> Balance Checking.\n2> Withdrawal\n3> Deposit\n4> Exit\n**********\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
          printf("Balance Checking\n");
          printf("Current amount is %d\n", balance_checking);
          break;

        case 2:
          printf("Enter the amount for withdrawl\n");
          scanf("%d", &balance_withdrawl);
          if (balance_withdrawl > balance_checking)
          {
            printf("Insufficiant Balance\n");
          }
          else if (balance_withdrawl <= balance_checking)
          {
            balance_checking -= balance_withdrawl;
            printf("Current Amount is %d\n", balance_checking);
            printf("Please collect your cash\n");
            printf("Thank you, visit again\n");
          }
          break;

        case 3:
          printf("Enter the amount for deposit\n", da);
          scanf("%d", &da);

          balance_checking += da;

          printf("Current amount is %d\n", balance_checking);
          printf("Thank you, visit again\n");
          break;
        }
      } while (choice != 4);
    }
  } while (pin != 0);

  printf("*****************Thank You*****************\n");
}