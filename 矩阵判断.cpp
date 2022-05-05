#include <stdio.h>
int main(){
	int a,flag=0;
	scanf("%d",&a);
	int s[a][a];
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			scanf("%d",&s[i][j]);
		}
	}
	for(int i=0;i<a;i++){
		for(int j=i+1;j<a;j++){
			if(s[i][j]==0){
				flag++;
			}
		}
	}
	if(flag==(a*a-a)/2){
		for(int i=a-1;i>0;i--){
			for(int j=0;j<i;j++){
				if(s[i][j]==0){
					flag++;
				}
			}
		}
		if(flag==a*a-a){
			printf("PD");
		}
		if(flag==(a*a-a)/2){
			printf("DOWN");
		}
	}else{
		flag=0;
		for(int i=a-1;i>0;i--){
			for(int j=0;j<i;j++){
				if(s[i][j]==0){
					flag++;
				}
			}
		}
		if(flag==(a*a-a)/2){
			printf("UP");
		}else{
			printf("NO");
		}
	}
	return 0;
}