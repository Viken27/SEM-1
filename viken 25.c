#include<stdio.h>
void main(){
	int i=1,n,m;
	scanf("%d",&n);
	while(i<=10){
		printf("%d *%d",n,i);
		m=n*i;
		printf("=%d\n",m);
		i++;
	}
}
