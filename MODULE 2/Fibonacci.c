#include<stdio.h>
int main(){
  int i, n;
  int x1=0,x2=1;
  int nexterm = x1 + x2 ;
  printf("enter the number of terms :");
  scanf("%d",&n);
  
  for(i = 3; i <= n; ++i);
  {
    printf("%d", nexterm);
    x1 = x2;
    x2 = nexterm;
    printf("fibonacci series: %d %d", x1,x2);
  }
  return 0;
}
