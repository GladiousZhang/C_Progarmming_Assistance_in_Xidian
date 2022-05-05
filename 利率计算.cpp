#include <stdio.h>
int main(){
	double r,n,p;
	double year=1;
	scanf("%lf %lf",&r,&n);
	p=1.0+r;
	while(year<n){
		year++;
		p=(1.0+r)*p;
	}
	printf("%.2f",p);
	return 0;
} 
