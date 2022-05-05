#include <stdio.h>
#include <math.h>
int main(){
	double x;
	scanf("%lf",&x);
	if(x>=0){
		printf("%.2f",sqrt(x));
	}else{
		printf("%.2f",(x+1.0)*(x+1.0)+2.0*x+1.0/x);
	}
	return 0;
} 
