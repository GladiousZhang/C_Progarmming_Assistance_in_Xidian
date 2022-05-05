#include <stdio.h>
typedef struct{
	int a;
	int sum=0;
}ser;
int main(){
	int n,rep,change=1;
	scanf("%d",&n);
	ser s[n],t;
	for(int i=0;i<n;i++){
		scanf("%d",&s[i].a);
		rep=s[i].a;
		for(;rep>0;rep/=10){
			s[i].sum+=rep%10;
		}
	}
	for(int i=0;i<n&&change;i++){
		change=0;
		for(int j=0;j<n-i-1;j++){
			if(s[j].sum<s[j+1].sum){
				change=1;
				t=s[j];s[j]=s[j+1];s[j+1]=t;
			}
			if(s[j].sum==s[j+1].sum&&s[j].a>s[j+1].a){
				change=1;
				t=s[j];s[j]=s[j+1];s[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d %d\n",s[i].a,s[i].sum);
	}
	return 0;
}