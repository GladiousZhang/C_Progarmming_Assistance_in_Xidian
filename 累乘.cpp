#include <stdio.h>
double multiple(int k){
	int mult=1;
	for(int i=1;i<=k;i++){
		mult*=1+1.0/i;
	}
	return mult;
}
int main(){
	int k;
	scanf("%d",&k);
	printf("%.1f",multiple(k));
	return 0;
}