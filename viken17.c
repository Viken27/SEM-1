#include<stdio.h>
void main(){
	float unit,bill;
	printf("enter electricity unit :");
	scanf("%f",&unit);
	if(unit<=50){
		bill=(unit*0.5);
		printf("bill amount is %f",bill);
	}
	else if(unit<=150){
		bill=(50*0.5)+(unit-50)*(0.75);
		printf("bill amount is %f",bill);
	}
	else if(unit<=250){
		bill=(50*0.50)+(100*0.75)+(unit-150)*(1.20);
		printf("bill amount is %f",bill);
	}
	else{
		bill=(50*0.50)+(100*0.75)+(150*1.20)+(unit-250)*(1.5);
	}
}
