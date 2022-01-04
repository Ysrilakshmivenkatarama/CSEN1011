#include<stdio.h>
int main(){
int x,r = 0,rem;
printf("enter a number");
scanf("%d",&x);
while(x!=0){
  rem=x%10;
  r=r*10+rem;
  x/=10;

}
printf("reverse number %d",r);
return 0;
}
