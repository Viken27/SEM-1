#include<stdio.h>
void main(){
	float n1,n2,n3;
	printf("enter number :");
	scanf("%f",&n1);
	printf("enter number :");
	scanf("%f",&n2);
	printf("enter number :");
	scanf("%f",&n3);
	if(n1>n2){
		if(n1>n3){
			printf("%f is largest number :",n1);	
		}
		else{
			printf("%f largest number :",n3);
		}
	}
	else {
		if(n2>n3){
			printf("%f is largest number :",n2);
			
		}
		else{
			printf("%f is largest number :",n3);
		}
	}
}
