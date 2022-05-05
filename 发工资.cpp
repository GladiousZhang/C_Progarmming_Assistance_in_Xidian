#include <stdio.h>
int main(){
	int a,b,c,d,e,f,g;
	scanf("%d",&a);
	b=a/100;/*百元的张数*/
	c=(a-100*b)/50;/*五十元的张数*/ 
	d=(a-100*b-50*c)/20;/*二十元的张数*/
	e=(a-100*b-50*c-20*d)/10;/*十元的张数*/
	f=(a-100*b-50*c-20*d-10*e)/5;/*五元的张数*/ 
	g=a-100*b-50*c-20*d-10*e-5*f;/*一元的张数*/ 
	printf("%d %d %d %d %d %d",b,c,d,e,f,g);
	return 0; 
} 
