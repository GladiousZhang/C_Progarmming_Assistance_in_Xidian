#include <stdio.h>
int main(){
	int year,flag=0;
	scanf("%d",&year);
	for(int i=1949;i<=year;year=year-4){
		if(year%4==0&&year%100!=0||year%400==0){
			flag++;
			if(flag%5!=0){
				printf("%d ",year);
			}else{
				printf("%d\n",year);
			}
		}else{
			continue;
		}
	}
	return 0;
}