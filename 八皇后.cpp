#include <stdio.h>

//n用于接收棋盘的大小，total用于记录解的数量
int n, total = 0;
//分别为记录每行所求的列的位置，列的标记，主对角线的标记，副对角线的标记
int row[13], column[13], m_diag[26], v_diag[26];

//定义一个输出的函数
void output() {
	//若解的数目小于等于三则输出具体的解
	if (1) {
		for (int i = 0; i < n; i++) {
			printf("%d ", row[i] + 1);
		}
		printf("\n");
	}
	//记录解的组数
	total ++;
}

//定义一个深度优先搜索及回溯的函数
void next(int i) {
	//对第i行的每一列进行遍历，查找满足条件的列
	for (int j = 0; j < n; j++) {
		if (!column[j] && !m_diag[n + i - j] && !v_diag[i + j] && i < n) {
			row[i] = j;  //记录该行可能解的位置
			column[j] = 1;  //将该列进行标记
			m_diag[n + i - j] = 1;  //将对应的主对角线进行标记
			v_diag[i + j] = 1;  //将对应的副对角线进行标记
			next(i + 1);  //进行递归，直至找到完整的能满足所有行的解
			column[j] = 0;  //回溯，并将列的标记取消
			m_diag[n + i - j] = 0;  //将主对角线的标记取消
			v_diag[i + j] = 0;  //将副对角线的标记取消
		}
		if (i >= n  ) {
			output();
		}
	}
	//找到一组解后进行输出并记录

}

int main() {
	//读入棋盘大小
	scanf("%d", &n);
	//从第一行开始寻找
	next(0);
	//输出解的组数
	printf("%d", total);
	return 0;
}