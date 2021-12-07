include<stdio.h>
int main(){
int n , n1, r , s = 0 ; 
printf("enter a three digit number ");
scanf("%d", &n);
n1=n;
while(n>0){
  r = n%10 ;
  s=s+(r*r*r);
  n=n/10;
}
if(s==n)
printf("%d is an armstrong number");
else 
printf("%d is not an armstrong number");

return 0 ;
}
