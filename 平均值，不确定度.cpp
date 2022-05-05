#include <stdio.h>
#include <math.h>

int main() {
	int times;
	printf("请输入实验次数\n");
	scanf("%d", &times);
	double eve_num[times], sum = 0;
	printf("请输入数据\n");
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
			printf("数据中有坏值：%lf，建议处理后重新代入程序！\n", eve_num);
			flag++;
			exit(0);
		}
	}
	if (flag == 0) {
		printf("数据中无坏值！sigma=%lf\n", sig);
	}
	A = sqrt(sum / (times * (times - 1)));
	double B, tool;
	printf("请输入仪器的不确定度\n");
	scanf("%lf", &tool);
	B = tool / (sqrt(3));
	printf("数据平均值为：%f\n数据的A类不确定度为：%f\n数据的B类不确定度为：%f\n数据的不确定度为：%f", ave, A, B,
	       sqrt(pow(A, 2) + pow(B, 2)));
	return 0;
}