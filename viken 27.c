#include<stdio.h>
void main(){
	int n,ans=1;
	scanf("%d",&n);
	while(n>=1){
		ans=ans*n;
		n--;
	}
	printf("ans=%d",ans);
}
