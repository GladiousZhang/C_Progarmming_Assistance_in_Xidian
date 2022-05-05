#include <stdio.h>
int compare(int x,int y){
	if(x%2==0&&y%2!=0){
		return 1;
	}else if(x%2!=0&&y%2==0){
		return -1;
	}else{
		return 0;
	}
}
int main(){
	int n,t,change;
	scanf("%d",&n);
	int s[n];
	for(int m=0;m<n;m++){
		scanf("%d",&s[m]);
	}
	for(int i=0,change=1;i<n&&change;i++){
		change=0;
		for(int j=0;j<n-i-1;j++){
			if(compare(s[j],s[j+1])==-1){
				t=s[j];s[j]=s[j+1];s[j+1]=t;
				change=1;
			}else if(compare(s[j],s[j+1])==0){
				if(s[j]<s[j+1]){
					t=s[j];s[j]=s[j+1];s[j+1]=t;
					change=1;
				}
			}
		}
	}
	for(int l=0;l<=n-1;l++){
		printf("%d ",s[l]);
	}
	return 0;
}