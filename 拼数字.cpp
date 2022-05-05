#include <stdio.h>
#include <math.h>
int prime(int n){
	int m=n;
	for(int i=n/2;i>2;i--){
		if(n%i==0){
			m=i;
			break;
		}
	}
	return m;
}
int num(char s[]){
	int flag=0,sum=0;
	for(int i=0;s[i]!=0;i++){
		if(s[i]<='9'&&s[i]>='0'){
			flag++;
		}
	}
	for(int i=0;s[i]!=0;i++){
		if(s[i]<='9'&&s[i]>='0'){
			flag--;
			sum+=(s[i]-'0')*pow(10,flag);
		}
	}
	return sum;
}
int main(){
	char s[100]={};
	gets(s);
	int a=num(s);
	if(a==0){
		printf("%d",a);
	}else{
		printf("%d",prime(a));
	}
	return 0;
}