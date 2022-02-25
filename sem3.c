#include<stdio.h>
#include<string.h>
struct customer {

  char name[15];

  int amount;

  char mobile_number[10];

} cust ;
int main()
{   long int i;
  printf("enter the name:");
  scanf("%s",cust.name);
 printf("enter the mobile number:");
  scanf("%s",cust.mobile_number);
   printf("the amount:");
  scanf("%d",&cust.amount);
  if(cust.mobile_number[i]>=33 && cust.mobile_number[i]<=38 || cust.mobile_number[i]==64)
    printf("\nInvalid entry\n" );
  else
    printf("%s\n",cust.mobile_number);
  if(cust.mobile_number[i] != 10)
    printf("%s\n",cust.mobile_number);
     else 
    printf("\nInvalid mobile number\n ");
  
  if(cust.amount<=0)
   printf("\nInvalid amount \n"); 
 else
   printf("%d\n",cust.amount); 
return 0;
}