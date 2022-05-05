#include <stdio.h>
int main(){
	int n,i,t=0,a,b,max=0,rec;
	scanf("%d",&n);
	while(t<n){
		int sum=0;
		scanf("%d",&i);
		a=i;
		while(a>0){
			b=a%10;
			sum=b+sum;
			a=a/10;
		}//求和 
		if(sum>max){
			max=sum;
			rec=i;
		}//若总和大的情况 
		if(sum==max){
			if(i>rec){
			rec=i;
		} 
		}//若总和相等的情况 
		t++;
	}	
	printf("%d",rec); 
	return 0;
}
