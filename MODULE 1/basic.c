#include <stdio.h>
int main(){
int basic,da,hra,pf,incometax,others,ta;
  printf("enter your basic :\n your da:\n your hra:\n");
  scanf("%d %d %d",&basic,&da,&hra);
  da=(basic*12)/100;
  hra=(basic*10)/100;
  incometax=(basic*5)/100;
  printf("your da: %d");
  printf("your hra: %d");
  printf("your incometax: %d ");
  return 0 ;
   
}
