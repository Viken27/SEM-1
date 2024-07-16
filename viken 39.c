#include<stdio.h>
void main(){
	int n,i,j,a=1;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    for(j=1;j<=i;j++){
		if(a%2==1){
			printf("1 ");
		}
		else{
			printf("0 ");
		}
		a++;
	    }
	        printf("\n");
    }
}
