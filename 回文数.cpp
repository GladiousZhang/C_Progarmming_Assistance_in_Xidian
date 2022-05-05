#include <stdio.h>
#include <math.h>
int num(int n){
	int i;
	for(i=0;n>0;i++){
		n/=10;
	}
	return i;
}
int main(){
	int n;
	scanf("%d",&n);
	int z=n;
	int s=num(n);
	int a[s];
	for(int i=0;i<s;i++){
		a[i]=n%10;
		n/=10;
	}
	double opp=0;
	for(int i=0;i<s;i++){
		int sqr=pow(10,s-i-1);
		opp+=a[i]*sqr;
	}
	if(opp==z){
		int sum=0;
		for(int i=0;i<s;i++){
			sum+=a[i];
		}
		printf("%d",sum);
	}else{
		printf("no");
	}
	return 0;
}