#include <stdio.h>
int  main(){
	int n,i,g=0;
	int t=0;
	scanf("%d",&n);
	scanf("%d",&i);
	int m=i;
	scanf("%d",&i);
	int p=m-i;
	m=i;
	int f=p;
	while(t<n-2){
		scanf("%d",&i);
		p=m-i;
		if(p*f<0){
			g++;
		}
		f=p;
		m=i;
		t++;
	}
	printf("%d",g); 
}
