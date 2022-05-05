#include <stdio.h>
#include <math.h>
int main(){
	int n,min=10000;
	scanf("%d",&n);
	int s[n];
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n&&i!=j;j++){
			if(abs(s[i]-s[j])<min){
				min=abs(s[i]-s[j]);
			}
		}
	}
	printf("%d",min);
	return 0;
}