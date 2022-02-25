#include<stdio.h>
#include<stdlib.h>

int main(){
  int x1,x2,y1,y2;
  int v1,v2,s1,s2;
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  v1=x1+y1;
  s1=v1%2;
    v2=x2+y2;
  s2=v2%2;
  if(s1 == 0 && s2 == 0)
printf("true");
  else if (s1 !=0 && s2!=0)
    printf("true");
  else
    printf("false");
  return 0;
  
}
