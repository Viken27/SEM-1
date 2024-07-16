#include<stdio.h>
void main(){
	float n,i,j,a,sum=1;
	printf("enter the number :");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
		a=1;
		for(j=1;j<=i;j++){
			a=a*j;
		}
		sum=sum+1/a;
	}
	printf("sum = %f",sum);
}
