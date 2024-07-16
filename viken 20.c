#include<stdio.h>
void main(){
	int n;
	printf("enter the month digit :");
	scanf("%d",&n);
	switch(n){
		case 1: 
		case 3: 
		case 5: 
		case 7: 
		case 8:
		case 10: 
		case 12:	
		printf("month has 31 days");
		break;
		case 4: 
		case 6: 
		case 9: 
		case 11:
		printf("month has 30 days");
		break;
		case 2:
		printf("month has 28 days");
		break;
		default:printf("invalid no");
	}
}
