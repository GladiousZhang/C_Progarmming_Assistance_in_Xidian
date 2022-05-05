#include <stdio.h>
#include <math.h>
int main(){
	int n,i,m,p,max=0;
	scanf("%d",&n);
	int t=0;
	scanf("%d",&i);
	m=i;
	while(t<n-1){
		scanf("%d",&i);
		p=abs(i-m);
		m=i;
		if(p>max)max=p;
		t++;
	}
	printf("%d",max);
	return 0;
}
