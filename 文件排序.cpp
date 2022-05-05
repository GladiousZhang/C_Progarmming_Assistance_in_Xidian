#include <stdio.h>
#include <math.h>

typedef struct {
	char date[11] = {};
	int size;
	int num = 0;
} file;

int main() {
	int a, flag = 0, change;
	scanf("%d", &a);
	file s[a];
	file t;
	for (int i = 0; i < a; i++) {
		scanf("%s %d", &s[i].date, &s[i].size);
	}
	for (int i = 0; i < a; i++) {
		flag = 0;
		for (int j = 0;s[i].date[j]!=0; j++) {
			if (s[i].date[j] <= '9' && s[i].date[j] >= '0' && flag<4) {
				s[i].num += (s[i].date[j] - '0') * pow(10, (7 - flag));
				flag++;
			}
			if(s[i].date[j]=='/'&&s[i].date[j+2]>='0'&&s[i].date[j+2]<='9'){
				s[i].num += (s[i].date[j+1] - '0') * pow(10, (7 - flag))+(s[i].date[j+2] - '0') * pow(10, (6 - flag));
				flag+=2;
			}
			if(s[i].date[j]=='/'&&(s[i].date[j+2]<'0'||s[i].date[j+2]>'9')){
				s[i].num += (s[i].date[j+1] - '0') * pow(10, (6 - flag));
				flag+=2;
			}
		}
		//printf("%d\n",s[i].num);
	}
	for (int i = 0, change = 1; i < a && change; i++) {
		change = 0;
		for (int j = 0; j < a - i - 1; j++) {
			if (s[j].num < s[j + 1].num) {
				t = s[j];
				s[j] = s[j + 1];
				s[j + 1] = t;
				change = 1;
			} else if (s[j].num == s[j + 1].num) {
				if (s[j].size < s[j + 1].size) {
					t = s[j];
					s[j] = s[j + 1];
					s[j + 1] = t;
					change = 1;
				}
			}
		}
	}
	for (int i = 0; i < a; i++) {
		printf("%s %d\n", s[i].date, s[i].size);
	}
	return 0;
}