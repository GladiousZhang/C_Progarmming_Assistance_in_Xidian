#include <stdio.h>
int main(){
	int bill,amount;
	printf("��������Ʒԭ�ۣ�Ԫ����");
	scanf("%d",&amount);
	printf("��������ʵ���Ľ�Ԫ����");
	scanf("%d",&bill);
	if(amount<=bill){
		printf("Ӧ����%dԪ",bill-amount);
	}else{
		printf("������Ǯ����"); 
	}
	return 0; 
}
