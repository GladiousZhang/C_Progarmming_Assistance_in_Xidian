#include <stdio.h>
#include <string.h>
typedef struct{
	char no[20]={};
	int total;
	int eng;
}exam;
int main(){
	int a,b,change=1;
	scanf("%d %d",&a,&b);
	exam s[a],t;
	for(int i=0;i<a;i++){
		scanf("%s %d %d",&s[i].no,&s[i].total,&s[i].eng);
	}
	for(int i=0,change=1;i<a&&change;i++){
		change=0;
		for(int j=0;j<a-i-1;j++){
			if(s[j].total<s[j+1].total){
				t=s[j];s[j]=s[j+1];s[j+1]=t;
				change=1;
			}
			if(s[j].total==s[j+1].total){
				if(s[j].eng<s[j+1].eng){
					t=s[j];s[j]=s[j+1];s[j+1]=t;
					change=1;
				}
				if(s[j].eng==s[j+1].eng){
					if(strcmp(s[j].no,s[j+1].no)==1){
						t=s[j];s[j]=s[j+1];s[j+1]=t;
						change=1;
					}
				}
			}
		}
	}
	for(int i=0;i<b;i++){
		printf("%s %d %d\n",s[i].no,s[i].total,s[i].eng);
	}
	return 0;
}