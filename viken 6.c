#include<stdio.h>
int main(){
	int a,b;
	printf("enter the value of A");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nswap no. a is %d",a);
	printf("\nswap no. b is %d",b);
}
