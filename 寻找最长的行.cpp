#include <stdio.h>
#include <string.h>
int main(){
	char line[100]={},cmp[100]={},end[]={"***end***"};
	int max=0;
	while(1){
		gets(line);
		if(strcmp(line,end)==0){
			break;
		}
		if(strlen(line)>max){
			max=strlen(line);
			strcpy(cmp,line);
		}
	}
	printf("%d\n%s",max,cmp);
	return 0;
}