#include <stdio.h>
#include <math.h>
int main(){
	int n;
	double s=100,h;
	scanf("%d",&n);
	h=100/(pow(2,n));
	for(;n>1;n--){
		s+=200/(pow(2,n-1));
	}
	printf("S=%.3f h=%.3f",s,h);
	return 0;
}