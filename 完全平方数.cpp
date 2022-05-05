#include <stdio.h>
int main(){
	int n,x=0;
	scanf("%d",&n);
	while(x<=n){
		if(x*x==n){
			printf("%d",x);
			break;
	    }
	    if(x==n){
		printf("no"); 
	}
	x++;
	}
	return 0;
}
