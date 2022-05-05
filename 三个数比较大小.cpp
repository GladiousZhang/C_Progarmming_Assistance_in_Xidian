#include <stdio.h>
int main(){
	int a,b,c,d;
	printf("请输入三个整数：");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		d=a;
	}else{
		d=b;
	}
	if(d>c){
		printf("最大的数为：%d",d);
	}else{
		printf("最大的数为：%d",c);
	}
	return 0;
}
