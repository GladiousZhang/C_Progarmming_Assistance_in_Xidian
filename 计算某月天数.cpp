#include <stdio.h>
int main(){
	int y,m;
	scanf("%d %d",&y,&m);
	if(y%400==0||y%4==0&&y%100!=0){
		switch(m){
			case 1:
			case 3:
			case 5:
			case 7:
			case 10:
			case 12:
				printf("31");
			break;
			case 2:
				printf("29");
			break;
			default:
				printf("30");
			break;
		} 
	} else{
			switch(m){
			case 1:
			case 3:
			case 5:
			case 7:
			case 10:
			case 12:
				printf("31");
			break;
			case 2:
				printf("28");
			break;
			default:
				printf("30");
			break;
		} 
	}
	return 0;
} 
