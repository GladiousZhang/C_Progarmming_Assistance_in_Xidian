#include <stdio.h>
#include <string.h>

int main() {
	char word[100];
	int len, i, j, ok;
	scanf("%s", word);
	len =  strlen(word);
	for (i = 1; i <= len; i++) { //������С����(��С���ڴ�����)Ϊi
		if (len % i == 0) { //�ַ�������һ�������ڵı���
			ok = 1;
			for (j = i; j < len; j++) //������i����һ��λ��j(��Ϊ�����Ǵ�0��ʼ�ģ�������һ��λ�õ�����j��������i)��ʼ
				if (word[j] != word[j % i]) { //��ǰ���������ڴ����ַ�����Ƚ�
					ok = 0;  //������ֳ���һ��������ˣ�˵�����i��������
					break;    //�˳�ѭ���Ƚϣ��������������i
				}
			if (ok) { //ѭ���Ƚ��꣬���Ҳ�������ȵľͿ���ȷ��i����С����
				printf("%d\n", i);
				break;
			}
		}
	}

	return 0;
}