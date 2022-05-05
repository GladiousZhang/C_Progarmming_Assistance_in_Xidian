#include <stdio.h>
int main(){
	int year,month,day;
	int before;
	scanf("%d %d %d",&year,&month,&day);
	switch (month){
		case 1:
			before=0;
			break;
		case 2:
			before=31;
			break;
		case 3:
			if(year%4==0&&year%100!=0||year/400==0){
				before=60;
			}else{
				before=59;
			}
			break;
		case 4:
			if(year%4==0&&year%100!=0||year/400==0){
				before=91;
			}else{
				before=90;
			}
			break;
		case 5:
			if(year%4==0&&year%100!=0||year/400==0){
				before=121;
			}else{
				before=120;
			}
			break;
		case 6:
			if(year%4==0&&year%100!=0||year/400==0){
				before=152;
			}else{
				before=151;
			}
			break;
		case 7:
			if(year%4==0&&year%100!=0||year/400==0){
				before=182;
			}else{
				before=181;
			}
			break;
		case 8:
			if(year%4==0&&year%100!=0||year/400==0){
				before=213;
			}else{
				before=212;
			}
			break;
		case 9:
			if(year%4==0&&year%100!=0||year/400==0){
				before=244;
			}else{
				before=243;
			}
			break;
		case 10:
			if(year%4==0&&year%100!=0||year/400==0){
				before=274;
			}else{
				before=273;
			}
			break;
		case 11:
			if(year%4==0&&year%100!=0||year/400==0){
				before=305;
			}else{
				before=304;
			}
			break;
		case 12:
			if(year%4==0&&year%100!=0||year/400==0){
				before=335;
			}else{
				before=334;
			}
			break;
	}
	printf("%d",before+day);
	return 0;
}