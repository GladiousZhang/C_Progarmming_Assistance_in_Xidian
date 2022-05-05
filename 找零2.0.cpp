#include <stdio.h>
int main(){
	int bill,amount;
	printf("请输入商品原价（元）：");
	scanf("%d",&amount);
	printf("请输入您实付的金额（元）：");
	scanf("%d",&bill);
	if(amount<=bill){
		printf("应找您%d元",bill-amount);
	}else{
		printf("您付的钱不够"); 
	}
	return 0; 
}
