#include <stdio.h>
int main(){
	int n,m;
	int sum=0;
	scanf("%d",&n); 
	while(n>0){
		m=n%10;
		sum+=m;
		n/=10;
	}
	printf("%d",sum);
	return 0;
}
