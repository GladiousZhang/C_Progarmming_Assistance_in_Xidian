#include <stdio.h>
int main(){
	int n,c,i,max=0,min=9;
	scanf("%d",&n);
	int t=n;
	do{
		i=n%10;
		n/=10;
		c++;
		if(i>max)max=i;
		if(i<min)min=i;
	}while(n>0);
	
	printf("%d %d %d",c,max,min);
	return 0;
}
