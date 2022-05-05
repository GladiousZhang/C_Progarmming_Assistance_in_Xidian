#include <stdio.h>
int main(){
	int a;
	int n=0;
	scanf("%d",&a);
	while(a>0){
		a/=10;
		++n;
	} 
	printf("%d",n);
	return 0;
}
