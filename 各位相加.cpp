#include <stdio.h>
int main(){
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a/100;
	c=a/10-10*b;
	d=a-10*c-100*b;
	e=b+c+d;
	printf("%d",e);
	return 0;
}
