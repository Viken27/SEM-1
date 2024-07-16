#include<stdio.h>
void main(){
	int n,i,ans=1;
	printf("enter the number :");
	scanf("%d",&n);
	for(i=n;i>0;i--){
		ans=ans*i;
	}
	printf("ans=%d",ans);
}
