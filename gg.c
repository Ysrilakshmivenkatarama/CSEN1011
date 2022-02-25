#include<stdio.h>

struct height {
    int feet; 
    int inches;
} ;
int main()
{
  
    struct  person h1 ,h2 ,h3 ;
  h1[20];
  h2[20];
  h3[20];
    scanf("%d%d", &h1.feet , &h1.inches);
    scanf("%d%d", &h2.feet , &h2.inches);
    
    h3.feet = h1.feet + h2.feet ;
    h3.inches = h1.inches + h2.inches ;
    h3.feet=h3.feet +h3.inches/12;
    h3.inches = h3.inch%12;
    printf("%d %d ", h3.feet,h3.inches);


     return 0;
}