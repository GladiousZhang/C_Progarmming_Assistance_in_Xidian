#include <stdio.h>
#include <string.h>
int main(){
	char s1[101]={},s2[101]={};
	int max=0,rec=0;
	double rate;
	gets(s1);gets(s2);
	int len1,len2;
	len1=strlen(s1);len2=strlen(s2);
	for(int i=0;s1[i]!=0||s2[i]!=0;i++){
		if(s1[i]>='A'&&s1[i]<='Z'){
			s1[i]+=32;
		}
		if(s2[i]>='A'&&s2[i]<='Z'){
			s2[i]+=32;
		}
	}
	//printf("%s\n%s\n",s1,s2);
	for(int i=0;s1[i]!=0;i++){
		for(int j=0;s2[j]!=0;j++){
			if(s1[i]==s2[j]){
				for(int k=j,l=i;s1[l]==s2[k]&&s1[i]!=0&&s2[k]!=0;l++,k++){
					rec++;
				}
			}
			if(rec>max){
				max=rec;
			}
			rec=0;
		}
	}
	//printf("%d\n",max);
	rate=(2.0*max)/(len1+len2);
	printf("%.3f",rate);
	return 0;
}