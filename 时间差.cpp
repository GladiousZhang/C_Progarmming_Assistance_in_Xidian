#include <stdio.h>
int main()
{
	int hour1,minute1,hour2,minute2;
	printf("请输入开始时间"); 
	scanf("%d %d",&hour1,&minute1);
	printf("请输入结束时间");
	scanf("%d %d",&hour2,&minute2);
	int h1=hour2-hour1;
	int m1=minute2-minute1;
	if(m1<0){
		m1=60+m1;
		h1--;
	}
	printf("开始时间与结束时间相差%d时%d分",h1,m1);
	return 0;
 } 
