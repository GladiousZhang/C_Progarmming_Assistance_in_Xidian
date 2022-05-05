#include <stdio.h>
#include <string.h>
int main(){
	char end[]={"pwd"},menu[201]={},cd[4]={},cdor[100]={},root[]={"/"},last[100]={".."};
	scanf("%s",menu);
	int flag=0,cnt=0;
	while(1){
		scanf("%s",cd);
		if(strcmp(cd,end)==0){
			break;
		}
		scanf("%s",cdor);
		if(strcmp(cdor,root)==0){
			menu[0]='/';
			for(int i=1;menu[i]!=0;i++){
				menu[i]=0;
			}
		}else if(strcmp(cdor,last)==0){
			for(int i=0;menu[i]!=0;i++){
				flag++;
			}
			for(;menu[flag]!='/';flag--){
				menu[flag]=0;
			}
			for(int i=0;menu[i]!=0;i++){
				if(menu[i]=='/'){
					cnt++;
				}
			}
			if(cnt>1){
				menu[flag]=0;
			}
			flag=0;cnt=0;
		}else if(cdor[0]<='z'&&cdor[0]>='a'||(cdor[0]<='9'&&cdor[0]>='0')){
			for(flag=0;menu[flag]!=0;flag++){
			}
			if(menu[1]!=0){
				menu[flag]='/';
			}
			strcat(menu,cdor);
			flag=0;
		}else{
			strcpy(menu,cdor);
		}
		for(int i=0;cdor[i]!=0;i++){
			cdor[i]=0;
		}
		for(int i=0;cd[i]!=0;i++){
			cd[i]=0;
		}
	}
	printf("%s",menu);
	return 0;
}