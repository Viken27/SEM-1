#include<stdio.h>
void main(){
	int n,i=2,flag=0;
	scanf("%d",&n);
	while(i<n){
		if((n%i)==0){
			flag=1;
		}
		i++;
	}
	if(flag==0){
		printf("prime number");
	}
	else{
		printf("not prime number");
	}
}
