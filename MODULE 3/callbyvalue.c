// using call by value swapping of two numbers 
/* algorithm 
1. accept two numbers a and b
2. call the function 
3.stop




#include<stdio.h>
int swap(int x,int y){
	int d;
	d=x;
	x = y; 
    y=d;	
	
}
int main(){
	int a,b;
	printf("before swapping the numbers \n ", a,b);
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("after swapping the numbers \n a = %d , b = %d ", a, b);
	
	return 0;
}
