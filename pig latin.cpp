#include <stdio.h>
int isWord(char s[]){
	for(int i=0;s[i]!=0;i++){
		if((s[i]>'Z'&&s[i]<'a')||s[i]<'A'||s[i]>'z'){
			return 0;
		}
	}
	return 1;
}
int isVow(char s[]){
	if(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u'||s[0]=='A'||s[0]=='E'||s[0]=='I'||s[0]=='O'||s[0]=='U'){
		return 1;
	}
	return 0;
}
int main(){
	char s[100000];
	while(1){
		scanf("%s",s);
		if(!isWord(s)){
			printf("%s ",s);
			for(int i=0;s[i]!=0;i++){
				s[i]=0;
			}
		}else{
			if(isVow(s)){
				int flag1=0;
				for(;s[flag1]!=0;flag1++);
				s[flag1]='a';s[flag1+1]='y';
				printf("%s ",s);
			for(int i=0;s[i]!=0;i++){
				s[i]=0;
			}
			}else{
				int flag2=0;
				for(;s[flag2]!=0;flag2++);
				s[flag2]=s[0];s[flag2+1]='a';s[flag2+2]='y';s[0]=0;
				for(int j=1;s[j]!=0;j++){
					printf("%c",s[j]);
				}
				printf(" ");
			for(int i=0;s[i]!=0;i++){
				s[i]=0;
			}
			}
		}
		if(s[0]=='\n'){
			break;
		}
	}
	return 0;
}