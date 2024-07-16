#include<stdio.h>
void main(){
	int a;
	printf("enter number :");
	scanf("%d",&a);
	if((a|1)>a){
		printf("%d is even",a);
	}
	else{
		printf("%d is odd",a);
	}
}
