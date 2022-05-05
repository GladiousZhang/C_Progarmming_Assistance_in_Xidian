#include <stdio.h>
int main(){
	int num,time=0,sum=0,last=0,flag=-1;
	do{
		scanf("%d",&num);
		switch(num){
			case 0:
				break;
			case 1:
				sum+=1;
				break;
			case 2:
				sum+=2;
				flag++;
				break;
		}
		if(num==last&&num==2){
			sum=sum+flag*2;
		}else{
			flag=0;
		}
		time++;
		last=num;
		}while(num!=0&&time<1000);
		printf("%d",sum);
		return 0;
	}