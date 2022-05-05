#include <stdio.h>
double function(int n){
	double res;
	if(n==1){
		res=1;
	}else{
		res=1/(1+function(n-1));
	}
	return res;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%.6f",function(n));
	return 0;
}