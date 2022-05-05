#include <stdio.h>
int main(){
	int a=1,b=1000,c=1,d=0,i=0;
	int s[3];
	while(a<=b){
		while(c<a){
			if(a%c==0){
				d=d+c;
			}
		c++;
		}
	if(d==a){
		s[i]=d;
		i++;
	}
	a++;
	c=1;
	d=0;
	}
	for(int i=0;i<3;i++){
		printf("%d its factors are 1,",s[i]);
		for(int j=2;j<s[i]/2;j++){
			if(s[i]%j==0){
				printf("%d,",j);
			}
		}
		printf("%d\n",s[i]/2);
	}
	return 0;
}
 
