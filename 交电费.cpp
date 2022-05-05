#include <stdio.h>
int main(){
	double pow,fee;
	scanf("%lf",&pow);
	if(pow<110){
		fee=pow*0.5;
	}else if(pow<=210){
		fee=55.0+(pow-110)*0.55;
	}else{
		fee=110.0+(pow-210)*0.7; 
	}
	printf("%.2f",fee);
	return 0;
}
