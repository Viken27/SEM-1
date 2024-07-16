#include<stdio.h>
void main(){
	int a;
	printf("enter the value :");
	scanf("%d",&a);
	a=a%10;
	if(a%2==0){
		printf("entered value is even");
	}
	else{
		printf("entered value is odd");
		}
}
