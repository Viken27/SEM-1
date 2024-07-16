#include<stdio.h>
void main(){
	int n,i=1,sum=0;
	scanf("%d",&n);
	while(i<n){
		if((n%i)==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==n){
		printf("given number is perfect");
	}
	else {
		printf("given number is not perfect");
	}
}
