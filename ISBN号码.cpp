#include <stdio.h>
#include <string.h>
int main(){
	char isbn[14];
	gets(isbn);
	int cor,sum=0,num=0;
	for(int i=0;i<12;i++){
		if(isbn[i]<='9'&&isbn[i]>='0'){
			num++;
			sum+=(isbn[i]-48)*num;
		}
	}
	cor=sum%11;
	if(cor==10){
		cor='X';
	}else{
		cor+=48;
	}
	if(cor==isbn[12]){
		printf("Right");
	}else{
		isbn[12]=cor;
		printf("%s",isbn);
	}
	return 0;
}