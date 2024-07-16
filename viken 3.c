#include<stdio.h>
void main(){
	float p,r,t,intrest;
	printf("enter the value of p");
	scanf("%f",&p);
	printf("enter the value of r");
	scanf("%f",&r);
	printf("enter the value of t");
	scanf("%f",&t);
	intrest=(p*r*t)/100;
	printf("simple intrest is %f",intrest);
}
