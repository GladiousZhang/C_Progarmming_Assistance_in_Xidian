#include <stdio.h>
int osum(int n){
	int sum=1;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			sum+=n/i;
		}
	}
	return sum;
}
int time(int n){
	int flag=1;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			flag++;
		}
	}
	return flag;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(osum(a)==b&&osum(b)==a){
		printf("yes %d %d",time(a),time(b));
	}else{
		printf("no %d %d",time(a),time(b));
	}
	return 0;
}