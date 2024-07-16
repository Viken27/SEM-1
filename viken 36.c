#include<stdio.h>
void main(){
	int n,a,count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
	printf("enter the number :");
	scanf("%d",&n);
	for(;n!=0;){
		a=n%10;
		n=n/10;
		if(a==0){
			count0++;
		}
		else if(a==1){
			count1++;
		}
		else if(a==2){
			count2++;
		}
		else if(a==3){
			count3++;
		}
		else if(a==4){
			count4++;
		}
		else if(a==5){
			count5++;
		}
		else if(a==6){
			count6++;
		}
		else if(a==7){
			count7++;
		}
		else if(a==8){
			count8++;
		}
		else if(a==9){
			count9++;
		}
	}
	printf("count0=%d\n",count0);
	printf("count1=%d\n",count1);
	printf("count2=%d\n",count2);
	printf("count3=%d\n",count3);
	printf("count4=%d\n",count4);
	printf("count5=%d\n",count5);
	printf("count6=%d\n",count6);
	printf("count7=%d\n",count7);
	printf("count8=%d\n",count8);
	printf("count9=%d\n",count9);
}
