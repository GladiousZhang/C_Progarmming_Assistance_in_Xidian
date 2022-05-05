#include <stdio.h>
#include <string.h>
int main(){
	char s[51]={},ori[101]={};
	int j=0,num;
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++){
		if((s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A')){
			ori[j]=s[i];
			j++;
			//printf("%s\n",ori);
		}
		if(s[i]<='9'&&s[i]>='0'&&(s[i+1]>'9'||s[i+1]<'0')&&(s[i-1]>'9'||s[i-1]<'0')){
			num=s[i]-48;
			for(;num>1;num--){
				ori[j]=s[i-1];
				j++;
			//printf("%s\n",ori);
			}
		}
		if(s[i]<='9'&&s[i]>='0'&&(s[i+1]<='9'&&s[i+1]>='0')&&(s[i+2]>'9'||s[i+2]<'0')&&(s[i-1]>'9'||s[i-1]<'0')){
			num=(s[i]-48)*10+(s[i+1]-48);
			for(;num>1;num--){
				ori[j]=s[i-1];
				j++;
			//printf("%s\n",ori);
			}
		}
		if(s[i]<='9'&&s[i]>='0'&&(s[i+1]<='9'&&s[i+1]>='0')&&(s[i+2]<='9'&&s[i+2]>='0')&&(s[i-1]>'9'||s[i-1]<'0')){
			num=(s[i]-48)*100+(s[i+1]-48)*10+(s[i+2]-48);
			for(;num>1;num--){
				ori[j]=s[i-1];
				j++;
			//printf("%s\n",ori);
			}
		}
	}
	printf("%s\n",ori);
	return 0;
}