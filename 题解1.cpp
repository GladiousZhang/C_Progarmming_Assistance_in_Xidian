#include <iostream>
#include <stack>
using namespace std;

stack<int>q;//ջq
int p, n; //p�����ݣ�nΪ���г���
int main() {
	cin >> p;
	while (p--) {
		cin >> n;
		int a[n + 1], b[n + 1], sum = 1; //��ջ����a�����������b��������sum
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		for (int i = 1; i <= n; i++)
			cin >> b[i]; //ƽƽ���������
		for (int i = 1; i <= n; i++) {
			q.push(a[i]);//��ջ
			//printf("%d\n%d\n", q.top(), b[sum]);
			while ((q.top()) == b[sum]) { //��ջ��Ԫ����b�е�ǰԪ����ͬʱ��ջ
				q.pop(), sum++; //sum++��b��һ��Ԫ��
				if (q.empty())
					break;//ע�������һ��RE����Ϊ��ջ��ʱ�����˳�ջ����������Ҫ�ֶ�����ѭ��
			}
		}
		if (q.empty())
			cout << "Yes" << endl; //���ջΪ��˵����ջ����b��ȷ
		else
			cout << "No" << endl;
		while (!q.empty())
			q.pop();//���ջ
	}
	return 0;//лĻ

}