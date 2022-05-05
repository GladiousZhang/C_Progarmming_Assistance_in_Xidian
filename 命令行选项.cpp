#include <stdio.h>
int main(){
	char order[255]={},rec[255]={};
	int j=0;
	gets(order);
	for(int i=0;i<255&&order[i]!='\0';i++){
		if(order[i]=='-'){
			rec[j]=order[i+1];
			j++;
		}
	}
	if(rec[0]=='\0'){
		printf("no");
	}else{
		for(int j=97;j<123;){
			for(int i=0;i<255&&rec[i]!='\0';i++){
				if(rec[i]==j){
					printf("-%c ",rec[i]);
					goto out;
				}
			}
			out:
				j++;
		}
	}
	return 0;
}