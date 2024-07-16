#include<stdio.h>
void main(){
	char x;
	printf("enter the value :");
	scanf("%c",&x);
	if(x>='a' && x<='z'){
	printf("lower case");
	}
	else if(x>='A' && x<='Z'){
		printf("upper case");
	}
	else if(x>='0' && x<='9'){
		printf("digit");
	}
	else{
		printf("special character");
	}
}
