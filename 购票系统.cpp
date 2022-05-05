#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int s[a],total[20][5]={};
	for(int i=0;i<a;i++){
		scanf("%d",&s[i]);
	}
	for(int i=0;i<a;i++){
		switch(s[i]){
			case 1:
				for(int j=0;j<20;j++){
					for(int k=0;k<5;k++){
						if(total[j][k]==0){
							printf("%d\n",5*j+k+1);
							total[j][k]=-1;
							goto out;
						}
					}
				}
				out:
			break;
			default:
				for(int j=0;j<20;j++){
					for(int k=0;k<5;k++){
						if(total[j][k]==0&&k+s[i]<=5){
							for(int l=0;l<s[i]-1;l++){
								printf("%d ",5*j+k+1+l);
								total[j][k+l]=-1;
							}	
							printf("%d\n",5*j+k+s[i]);
							total[j][k+s[i]-1]=-1;
							goto out2;
						}
					}
				}
				for(int j=0;j<20&&s[i];j++){
					for(int k=0;k<5&&s[i];k++){
						if(total[j][k]==0&&s[i]!=1){
							printf("%d ",5*j+k+1);
							s[i]--;total[j][k]=-1;
						}
						if(total[j][k]==0&&s[i]==1){
							printf("%d\n",5*j+k+1);
							s[i]--;total[j][k]=-1;
						}
					}
				}
				out2:
			break;
		}
	}
	return 0;
}