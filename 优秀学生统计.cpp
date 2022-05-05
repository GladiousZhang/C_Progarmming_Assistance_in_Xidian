#include <stdio.h>
typedef struct{
	int no;
	int scr1;
	int scr2;
	int scr3;
	int scr4;
	int scr5;
	int tot=0;
}inf;
int main(){
	int n;
	scanf("%d",&n);
	inf s[n],t;
	for(int i=0;i<n;i++){
		scanf("%d %d %d %d %d %d",&s[i].no,&s[i].scr1,&s[i].scr2,&s[i].scr3,&s[i].scr4,&s[i].scr5);
		s[i].tot=s[i].scr1+s[i].scr2+s[i].scr3+s[i].scr4+s[i].scr5;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(s[j].tot<s[j+1].tot){
				t=s[j];s[j]=s[j+1];s[j+1]=t;
			}
		}
	}
	int flag=0,good=0;
	for(int i=0;i<n;i++){
		if(s[i].scr1>=90){
			flag++;
		}
		if(s[i].scr2>=90){
			flag++;
		}
		if(s[i].scr3>=90){
			flag++;
		}
		if(s[i].scr4>=90){
			flag++;
		}
		if(s[i].scr5>=90){
			flag++;
		}
		if(flag>=3){
			good++;
		}
		flag=0;
	}
	printf("%d %d\n%d",s[0].no,s[0].tot,good);
	return 0;
}