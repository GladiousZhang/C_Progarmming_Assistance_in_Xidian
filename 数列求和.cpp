#include <stdio.h>
int A(int n){
	int resA;
	if(n==1){
		resA=2;
	}else if(n==2){
		resA=3;
	}else{
		resA=A(n-1)+A(n-2);
	}
	return resA;
}
int B(int n){
	int resB;
	if(n==1){
		resB=1;
	}else if(n==2){
		resB=2;
	}else{
		resB=B(n-1)+B(n-2);
	}
	return resB;
}
int main(){
	int n;
	scanf("%d",&n);
	double resSum=0;
	for(int i=1;i<=n;i++){
		resSum+=(1.0*A(i))/(1.0*B(i));
	}
	printf("%.2f",resSum);
	return 0;
}