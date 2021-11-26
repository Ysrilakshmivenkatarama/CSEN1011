# include <stdio.h>
int main(){
  int a,b,c,d,e,f;
  float t,ave,pm ;
  printf("enter marks of 5 subjects");
  scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
  t=a+b+c+d+e;
  ave=(t)/5;
  pm=(t/500)*100;
  printf("the t is %f\n ave is %f\n pm is %f\n",t,ave,pm);
  return 0;
}
