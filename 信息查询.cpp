#include <stdio.h>
typedef struct{
	int age;
	int no;
	int scr;
}inf;
int main(){
	int n,change=1;
	scanf("%d",&n);
	inf s[n],t;
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&s[i].age,&s[i].no,&s[i].scr);
	}
	for(int i=0;i<n&&change;i++){
		change=0;
		for(int j=0;j<n-i-1;j++){
			if(s[j].scr<s[j+1].scr){
				change=1;
				t=s[j];s[j]=s[j+1];s[j+1]=t;
			}
			if(s[j].scr==s[j+1].scr&&s[j].no<s[j+1].no){
				change=1;
				t=s[j];s[j]=s[j+1];s[j+1]=t;
			}
		}
	}
	printf("%d %d %d\n",s[0].age,s[0].no,s[0].scr);
	for(int i=0,change=1;i<n&&change;i++){
		change=0;
		for(int j=0;j<n-i-1;j++){
			if(s[j].age>s[j+1].age){
				change=1;
				t=s[j];s[j]=s[j+1];s[j+1]=t;
			}
			if(s[j].age==s[j+1].age&&s[j].no>s[j+1].no){
				change=1;
				t=s[j];s[j]=s[j+1];s[j+1]=t;
			}
		}
	}
	printf("%d %d %d",s[0].age,s[0].no,s[0].scr);
	return 0;
}