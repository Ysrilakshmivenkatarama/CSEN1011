#include<stdio.h>
int main(){
 int x,y, a;
 printf("the rows");
 scanf("%d",&a);
 for(x=1;x<=a;++x)
 {
   for(y=1;y<=x;++y)
 {
 printf("%d", y);
 }
 printf("\n");
 }
 
 
}
