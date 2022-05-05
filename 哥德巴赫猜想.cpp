#include <stdio.h>
int isPrime(int n){
	int flag=1;
	for(int i=2;i<n/2;i++){
		if(n%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<n/2;i++){
		if(isPrime(i)&&isPrime(n-i)){
			printf("%d %d",i,n-i);
			break;
		}
	}
	return 0;
}