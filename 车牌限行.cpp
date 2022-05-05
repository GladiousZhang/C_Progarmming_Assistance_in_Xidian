#include <stdio.h>
int main(){
	int day,dat,num;
	scanf("%d %d %d",&day,&dat,&num);
	printf("%d ",num%10);
	switch(day){
		case 1:
			if(dat<200){
				printf("no");
			}else if(dat<400){
				if(num%10==1||num%10==6){
					printf("yes");
				}else{
					printf("no");
				}
			}else{
				if(num%10==1||num%10==3||num%10==5||num%10==7||num%10==9){
					printf("yes");
				}else{
					printf("no");
				}
			}
		break;
		case 2:
		 	if(dat<200){
				printf("no");
			}else if(dat<400){
				if(num%10==2||num%10==7){
					printf("yes");
				}else{
					printf("no");
				}
			}else{
				if(num%10==0||num%10==2||num%10==4||num%10==6||num%10==8){
					printf("yes");
				}else{
					printf("no");
				}
			}
		break;
		case 3:
			if(dat<200){
				printf("no");
			}else if(dat<400){
				if(num%10==3||num%10==8){
					printf("yes");
				}else{
					printf("no");
				}
			}else{
				if(num%10==1||num%10==3||num%10==5||num%10==7||num%10==9){
					printf("yes");
				}else{
					printf("no");
				}
			}
		break;
		case 4:
			if(dat<200){
				printf("no");
			}else if(dat<400){
				if(num%10==4||num%10==9){
					printf("yes");
				}else{
					printf("no");
				}
			}else{
				if(num%10==0||num%10==2||num%10==4||num%10==6||num%10==8){
					printf("yes");
				}else{
					printf("no");
				}
			}
		break;
		case 5:
			if(dat<200){
				printf("no");
			}else if(dat<400){
				if(num%10==5||num%10==0){
					printf("yes");
				}else{
					printf("no");
				}
			}else{
				if(num%10==1||num%10==3||num%10==5||num%10==7||num%10==9){
					printf("yes");
				}else{
					printf("no");
				}
			}
		break;
		default:
			printf("no");
		break;
	}
	return 0;
}
