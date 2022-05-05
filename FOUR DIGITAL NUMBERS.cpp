#include <stdio.h>
int Ss(int n){
	int sum=0;
	while (n>0){
		sum+=n%16;
		n/=16;
	}
	return sum;
}
int St(int n){
	int sum=0;
	while(n>0){
		sum+=n%12;
		n/=12;
	}
	return sum;
}
int main(){
	int sum=0;
	for(int i=2992;i<=9999;i++){
		int j=i;
		while (j>0){
			sum+=j%10;
			j/=10;
		}
		if(sum==Ss(i)&&sum==St(i)){
			printf("%d\n",i);
		}
		sum=0;
	}
	return 0;
}