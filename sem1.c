#include <stdio.h>
int permutation (int t);
int w1,w2,w3,result,B,G;
int main()
{
  scanf("%d%d",&G,&B);
  if(G>B||B+G>=10){
    printf("Invalid");
    
  return 0;
    }
  
  
  w1 = permutation (B);
w2 = permutation (B+1);
w3 = permutation (B+1-G);
result = w1*(w2 / w3);
printf("%d",result);
  return 0;
  }

int permutation (int t)
{
  int result , x;
  for(x = t-1; t>= 1; t-- )
    {
      t=t*x;
    }
  return t;
  }