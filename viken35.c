#include<stdio.h>
void main(){
	int n,n1=0,n2=1,n3=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("-%d",n1);
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
}
