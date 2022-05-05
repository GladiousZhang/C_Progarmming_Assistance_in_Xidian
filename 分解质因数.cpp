#include <stdio.h>
int main(){
	int n,i,prob,cert;
	scanf("%d",&n);
	for(prob=2;prob<n;prob++){
		if(n%prob==0){
			cert=prob;
			n=n/prob;
			printf("%d*",cert);
			prob=1;
		}
	}
	if(n!=1){
		printf("%d",n);
	}
	return 0;
}