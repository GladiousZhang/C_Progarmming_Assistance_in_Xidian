#include <stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int c=a;
	if(a==0){
		printf("0");
	}else{
		while(c>0){
			if(a%c==0&&b%c==0){
				printf("%d",c);
				break;
				}
		c--; 
			}
		}
	return 0; 
}
