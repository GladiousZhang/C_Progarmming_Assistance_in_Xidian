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
		}//��� 
		if(sum>max){
			max=sum;
			rec=i;
		}//���ܺʹ����� 
		if(sum==max){
			if(i>rec){
			rec=i;
		} 
		}//���ܺ���ȵ���� 
		t++;
	}	
	printf("%d",rec); 
	return 0;
}
