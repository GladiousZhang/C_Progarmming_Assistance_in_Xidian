#include <stdio.h>
int main()
{
	int price=0;
	int amount=0;
	printf("请输入金额（元）：");
	scanf("%d",&price);
	printf("请输入原价（元）：");
	scanf("%d",&amount);
	int change=amount-price;
	printf("您的找零为：%d（元）",change);

}
