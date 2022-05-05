#include <stdio.h>
int main(){
	double distance,fee;
	int time;
	scanf("%lf %d",&distance,&time);
	if(distance<=3){
		fee=10.0+(time/5)*2.0;
	}else if(distance<=10){
		fee=10.0+(distance-3.0)*2.0+(time/5)*2.0;
	}else if(distance>10){
		fee=10.0+14.0+(time/5)*2.0+(distance-10.0)*3.0;
	}
	printf("%.0f",fee);
	return 0;
} 
