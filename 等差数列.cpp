#include <stdio.h>
#include <math.h>
int main(){
	int n,flag=0,t,change;
	scanf("%d",&n);
	if(n!=1&&n!=0){
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0,change =1;i<n&&change;i++){
			change=0;
			for(int j=0;j<n-i-1;j++){
				if(a[j]<a[j+1]){
					t=a[j];a[j]=a[j+1];a[j+1]=t;
					change=1;
				}
			}
		}
		int equal=a[0]-a[1];
		for(int i=0;i<n-1;i++){
			if((a[i]-a[i+1])!=equal){
				flag++;
				break;
			}
		}
		if(flag){
			printf("no");
		}else{
			printf("%d",abs(equal));
		}
	}
	if(n==1||n==0){
		printf("no");
	}
	return 0;
}