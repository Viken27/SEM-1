#include<stdio.h>
void main(){
	int n,i,j,a=0;
	printf("enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			a=a+j;
		}
	}
	printf("answer id : %d",a);
}
