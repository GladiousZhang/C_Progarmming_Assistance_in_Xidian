#include <stdio.h>
#include <math.h>

int main() {
	int times;
	printf("������ʵ�����\n");
	scanf("%d", &times);
	double eve_num[times], sum = 0;
	printf("����������\n");
	for (int i = 0; i < times; i++) {
		scanf("%lf", &eve_num[i]);
		sum += eve_num[i];
	}
	double ave = sum / times;
//	printf("%lf",sum);
	double A, sig;
	sum = 0;
	for (int i = 0; i < times; i++) {
		sum += pow(eve_num[i] - ave, 2);
	}
	sig = sqrt(sum / (times - 1));
	int flag = 0;
	for (int i = 0; i < times; i++) {
		if (abs(eve_num[i] - ave) > 3 * sig) {
			printf("�������л�ֵ��%lf�����鴦������´������\n", eve_num);
			flag++;
			exit(0);
		}
	}
	if (flag == 0) {
		printf("�������޻�ֵ��sigma=%lf\n", sig);
	}
	A = sqrt(sum / (times * (times - 1)));
	double B, tool;
	printf("�����������Ĳ�ȷ����\n");
	scanf("%lf", &tool);
	B = tool / (sqrt(3));
	printf("����ƽ��ֵΪ��%f\n���ݵ�A�಻ȷ����Ϊ��%f\n���ݵ�B�಻ȷ����Ϊ��%f\n���ݵĲ�ȷ����Ϊ��%f", ave, A, B,
	       sqrt(pow(A, 2) + pow(B, 2)));
	return 0;
}