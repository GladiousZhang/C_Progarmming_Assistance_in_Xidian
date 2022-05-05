#include <stdio.h>
typedef struct{
	int no;
	int x1;
	int y1;
	int x2;
	int y2;
}coor;
typedef struct{
	int x3;
	int y3;
}click;
int main(){
	int a,b,flag=1;
	scanf("%d %d",&a,&b);
	coor s[a],p;
	click t[b];
	for(int i=0;i<a;i++){
		s[i].no=i+1;
		scanf("%d %d %d %d",&s[i].x1,&s[i].y1,&s[i].x2,&s[i].y2);
	}
	for(int i=0;i<b;i++){
		scanf("%d %d",&t[i].x3,&t[i].y3);
	}
	for(int i=0;i<b;i++){
		flag=1;
		for(int j=a-1;j>=0;j--){
			if(t[i].x3<=s[j].x2&&t[i].x3>=s[j].x1&&t[i].y3<=s[j].y2&&t[i].y3>=s[j].y1){
				printf("%d\n",s[j].no);
				flag=0;
				p=s[j];
				while(j<a-1){
					s[j]=s[j+1];
					j++;
				}
				s[a-1]=p;
				break;
			}
		}
		if(flag){
		printf("IGNORED\n");
		}
	}
	return 0;
}