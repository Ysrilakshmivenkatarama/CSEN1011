#include<stdio.h>
long permutation(int n, int r);
long factorial(int num);
int main(void)
{    
    int n, r;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    printf("Permutation = %ld\n", permutation(n, r));  
  return 0; 
  }
  long combination(int n, int r)
{
    return permutation(n, r) / factorial(r);
}
  long factorial(int num)
{
    long long fact = 1;

    while(num > 0)
    {
        fact *= num;
        num--;
    }

    return fact;
}