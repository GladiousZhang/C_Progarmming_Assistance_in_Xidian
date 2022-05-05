#include <stdio.h>
#include <string.h>
int main(){
	char pw[50]={};
	int score=0,big=0,small=0,num=0,other=0,kind=0;
	scanf("%s",pw);
	if(strlen(pw)!=0){
		score++;
	}
	if(strlen(pw)>8){
		score++;
	}
	for(int i=0;pw[i]!=0;i++){
		if(pw[i]<='z'&&pw[i]>='a'){
			small++;
		}else if(pw[i]<='Z'&&pw[i]>='A'){
			big++;
		}else if(pw[i]<='9'&&pw[i]>='0'){
			num++;
		}else{
			other++;
		}
	}
	if(big)kind++;
	if(small)kind++;
	if(num)kind++;
	if(other)kind++;
	if(kind==2){
		score++;
	}else if(kind==3){
		score+=2;
	}else if(kind==4){
		score+=3;
	}
	printf("%d",score);
	return 0;
}