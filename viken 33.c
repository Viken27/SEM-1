#include<stdio.h>
void main(){
	int x,y,i,ans=1;
	printf("enter the value of x :");
	scanf("%d",&x);
	printf("enter the value of y :");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		ans=ans*x;
	}
	printf("ans=%d",ans);
}
