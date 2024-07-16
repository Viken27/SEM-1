#include<stdio.h>
#include<math.h>
void main(){
	float a,b,c,d,root1,root2,realpart,imgpart;
	printf("enter the value of a :");
	scanf("%f",&a);
	printf("enter the value of b :");
	scanf("%f",&b);
	printf("enter the value of c :");
	scanf("%f",&c);
	d=(b*b)-(4*a*c);
	if(d>0){
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		printf("root1=%.2f",root1);
		printf("root2=%.2f",root2);
	}
	else if (d==0){
	root1=(-b)/(2*a);
	printf("root1=%.2f",root1);
    }
    else {
    	realpart=(-b)/(2*a);
    	imgpart=sqrt(-d)/(2*a);
    	printf("root1=%.2f+i%.2f,root2=%.2f-i%.2f",realpart,imgpart,realpart,imgpart);
	}
}
