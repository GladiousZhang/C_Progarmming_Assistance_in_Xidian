#include <stdio.h>
typedef struct{
	char a[15]={};
}poke;//储存牌面
int main(){
	int num_p,time,flag=0;
	scanf("%d",&num_p);//读入牌的张数以及命令条数
	getchar();//吃掉回车符号
	poke s[num_p],u[num_p];
	for(int i=0;i<num_p;i++){
		gets(s[i].a);
	}//读入牌面
	scanf("%d",&time);//读入重复次数
	int t[num_p];//命令数列
	for(int i=0;i<num_p;i++){
		scanf("%d",&t[i]);
	}//读入命令
	for(int i=0;i<time;i++){
		if(flag%2==0){
			for(int j=0;j<num_p;j++){
				u[t[j]-1]=s[j];
			}
			flag++;
		}else{
			for(int j=0;j<num_p;j++){
				s[t[j]-1]=u[j];
			}
			flag++;
		}
	}//s与u通过flag改变奇偶数的方式实现相互交替放置另一组改变顺序的牌面
	if(flag%2!=0){
		for(int i=0;i<num_p;i++){
			printf("%s\n",u[i].a);
		}
	}else{
		for(int i=0;i<num_p;i++){
			printf("%s\n",s[i].a);
		}
	}//当flag为各异的奇偶数时输出不同的牌面放置结果
	return 0;
}