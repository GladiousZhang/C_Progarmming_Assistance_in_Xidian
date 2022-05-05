#include <stdio.h>
int isOdd(int n){
	if(n%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n,flag=0;
	scanf("%d",&n);
	while(n!=1){
		if(isOdd(n)){
			n=n/2;flag++;
		}
		else{
			n=3*n+1;flag++;
		}
	}
	printf("%d",flag);
	return 0;
}