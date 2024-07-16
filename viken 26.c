#include<stdio.h>
void main(){
	int n,p,i=1,ans=1;
	scanf("%d\n %d",&n,&p);
	while(i<=p){
		ans=n*ans;
		i++;
	}
	printf("%d",ans);
}
