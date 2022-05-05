#include <stdio.h>
#include <string.h>

int main() {
	char word[100];
	int len, i, j, ok;
	scanf("%s", word);
	len =  strlen(word);
	for (i = 1; i <= len; i++) { //假设最小周期(最小周期串长度)为i
		if (len % i == 0) { //字符串长度一定是周期的倍数
			ok = 1;
			for (j = i; j < len; j++) //从周期i的下一个位置j(因为数组是从0开始的，所以下一个位置的索引j等于周期i)开始
				if (word[j] != word[j % i]) { //和前面假设的周期串中字符逐个比较
					ok = 0;  //如果发现出现一个不相等了，说明这个i不是周期
					break;    //退出循环比较，递增假设的周期i
				}
			if (ok) { //循环比较完，仍找不到不相等的就可以确定i是最小周期
				printf("%d\n", i);
				break;
			}
		}
	}

	return 0;
}