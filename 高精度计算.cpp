#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char n1[100];


char n2[100];      //���������ַ���ʵ�ִ����Ķ�ȡ����
int tempadd[maxsize] = {0};   //����һ����ʱ����洢�ӷ�������м�����
int shuzun1[MAXSIZE] = {0};






int shuzun2[MAXSIZE] = {0};    //������������ʵ�ֶԴ����ĸ�λ���ϵĶ�ȡ����
int shuzun3[MAXSIZE] = {0};

int shuzun4[MAXSIZE] = {0};






int tempsub[MAXSIZE] = {0};  //����һ����ʱ����洢����������м�����,˼·������ӷ�һ��
int main() {
	int i, j, k, flag = 0;
	scanf("%s %s", n1, n2);

	int lenadd1 = strlen(n1);
	int lenadd2 = strlen(n2);
	for ( i = 0; i < lenadd1; i++) {
		shuzun1[i] = n1[lenadd1 - 1 - i] - '0';
		//printf("%c",shuzun1[i]);
	}
	for ( j = 0; j < lenadd2; j++) {
		shuzun2[j] = n2[lenadd2 - 1 - j] - '0';
	}                               //�������������Ϊÿ����λ������洢���ʼ���������������У���ʵԭ���������������ַ���������ǵ����
	//printf("%d %d\n",lenadd1,lenadd2);
	int len = lenadd1 >= lenadd2 ? lenadd1 : lenadd2;
	len++;//����������ӵĽ������������λ�����ٴ�1
	//printf("%d",len);
	for ( k = 0; k < len ; k++) {
		tempadd[k] = shuzun1[k] + shuzun2[k];
		if (flag)
			tempadd[k]++;
		flag = 0;
		if (tempadd[k] > 9) {
			flag = 1;
			tempadd[k] %= 10;
		}
		//�����м��������洢����������н�λ���������flag������м������е���һλ+1,���Ҹ�λӦ����10ȡ��
	}
	if (tempadd[len - 1] == 0) {
		len --;
	}
	for ( i = 0; i < len; i++) {
		printf("%d", tempadd[len - i - 1]);
		//�˴����м���������������ɵõ���ȷ�Ľ����������һ��ССϸ��ֵ��ע�⣬���ǵ����ǵ����λ����û�н�1ʱ����lenλ��߱������������ʼ��0�����������Ҫ��������жϺ�ɾ��0
	}
	printf("\n");
	len = lenadd1 >= lenadd2 ? lenadd1 : lenadd2;
	if (strcmp(n1, n2) < 0 && strlen(n1) == strlen(n2) || strlen(n1) < strlen(n2))
		printf("-");
	char temp[100];
	if ( strcmp(n1, n2) < 0 && strlen(n1) == strlen(n2) || strlen(n1) < strlen(n2)) {
		strcpy(temp, n1);
		strcpy(n1, n2);
		strcpy(n2, temp);
	}
	for ( i = 0; i < strlen(n1); i++) {
		shuzun3[i] = n1[strlen(n1) - 1 - i] - '0';
	}
	for ( j = 0; j < strlen(n2); j++) {
		shuzun4[j] = n2[strlen(n2) - 1 - j] - '0';
	}
	flag = 0;
	for ( k = 0; k <= len ; k++) {
		tempsub[k] = shuzun3[k] - shuzun4[k];
		//printf("%d ",tempsub[k]);
		if (flag == 1)
			tempsub[k]--;
		flag = 0;
		if (tempsub[k] < 0) {
			tempsub[k] += 10;
			flag = 1;
		}
		//�����м��������洢����������в�λ����������м������е���һλ-1,���Ҹ�λӦ��ӦΪ���Ӧ�ľ���ֵ
	}
	for ( i = len; i >= 0; i--) {
		if (tempsub[i] == 0 && len >= 1) {
			len--;
		} else
			break;
	}
	for ( i = 0; i <= len; i++) {
		printf("%d", tempsub[len - i]);
		//�˴����м���������������ɵõ���ȷ�Ľ����������һ��ССϸ��ֵ��ע�⣬���ǵ����ǵ����λ����û�н�1ʱ����lenλ��߱������������ʼ��0�����������Ҫ��������жϺ�ɾ��0
	}
	system ("pause");
	return 0;
}