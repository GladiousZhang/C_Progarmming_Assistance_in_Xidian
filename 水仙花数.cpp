#include <stdio.h>
void isNarc(int num){
	int i,sum=0;
	int judge=num;
	for(int n=1;n<=3;n++){
		i=num%10;
		sum=sum+i*i*i;
		num=num/10;
	}
	if(sum==judge){
		printf("yes");
	}else{
		printf("no");
	}
}//判断是否为水仙花数
int main(){
	int num;
	scanf("%d",&num);
	isNarc(num);
	return 0;
}