#include <stdio.h>
int main(){
	char s[101];
	gets(s);//读入字符串（包含空格或Tab）
	int i,sum=0;
	for(i=0;s[i]!='\0';i++){
		sum+=s[i];
	}
	printf("%d",sum&0xFF);
	return 0;
}