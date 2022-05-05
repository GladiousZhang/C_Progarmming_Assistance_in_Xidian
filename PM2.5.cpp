#include <stdio.h>
int main(){
	int n,p,sum,a=0,b=0,c=0,d=0,e=0,f=0;
	int m=0;
	scanf("%d",&n);
	while(m<n){
		scanf("%d",&p);
		sum+=p;
		if(p>=0&&p<=50){
			a++;
		}else if(p<=100){
			b++;
		}else if(p<=150){
			c++;
		}else if(p<=200){
			d++;
		}else if(p<=300){
			e++;
		}else{
			f++;
		}
		m++;
	}
	printf("%.2f\n%d %d %d %d %d %d",sum*1.0/n,a,b,c,d,e,f);
	return 0;
}
