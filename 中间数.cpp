#include <stdio.h>
int main(){
	int n,small=0,big=0,num;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]<a[j]){
				small++;
			}else if(a[i]>a[j]){
				big++;
			}
		}
		if(small==big){
			num=i;
			break;
		}else{
			num=-1;
		}
		small=0;big=0;
	}
	if(num==-1){
		printf("-1");
	}else{
		printf("%d",a[num]);
	}
	return 0;
}