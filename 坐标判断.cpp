#include <stdio.h>
int main(){
	int r,a;
	scanf("%d %d",&r,&a);
	if(r<0){
		printf("-1");
	}else if(r==0){
		printf("Origin");
	}else if(a==0||a==180||a==360||a==-180||a==-360){
		printf("X-axis");
	}else if(a==90||a==270||a==-90||a==-270){
		printf("Y-axis");
	}else if((a>0&&a<90)||(a>-360&&a<-270)){
		printf("1st Quadrant");
	}else if((a>90&&a<180)||(a<-180&&a>-270)){
		printf("2nd Quadrant");
	}else if((a>180&&a<270)||(a>-180&&a<-90)){
		printf("3rd Quadrant");
	}else{
		printf("4th Quadrant");
	}
	return 0;
}