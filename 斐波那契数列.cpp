#include <stdio.h>
int fib(int n){
	int res;
	if(n==1){
		res=1;
	}else if(n==2){
		res=1;
	}else{
		res=fib(n-1)+fib(n-2);
	}
	return res;
}
int isPri(int m){
	int flag=0;
	for(int i=2;i<m/2.0;i++){
		if(m%i==0){
			flag++;
			break;
		}
	}
	return flag;
}
int main(){
	int n;
	scanf("%d",&n);
	int res=fib(n);
	int flag=isPri(res);
	if(flag){
		printf("%d",res);
	}else{
		printf("yes");
	}
	return 0;
}