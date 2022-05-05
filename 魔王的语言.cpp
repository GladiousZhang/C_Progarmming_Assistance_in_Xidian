#include <stdio.h>
#include <deque>
#include <time.h>
using namespace std;

int main() {
	clock_t time1, time2;
	deque<char>inp;
	deque<char>fin;
	deque<char>rev;
	char A[] = {"sae"};
	char B[] = {"tsaedsae"};
	char cons;
	char a;
	int flag = 0, cnt = 0, b = 0;
	while (1) {
		scanf("%c", &a);
		if (a != '\n') {
			inp.push_back(a);
			cnt++;
		}
		if (a == '\n') {
			break;
		}
	}

	time1 = clock();
	int rec = cnt;
	int c = 0;
	int bracket = 1;
	while (rec) {
		a = inp.front();
		inp.pop_front();
		rec--;
		if (a == '(') {
			while (a != ')') {
				bracket++;
			}
		} else {
			fin.push_back(a);
		}
	}
	rec = cnt;
	while (rec) {
		a = fin.front();
		fin.pop_front();
		rec--;
		if (a == 'A') {
			for (int i = 0; A[i]; i++) {
				printf("%c", A[i]);
			}
		} else if (a == 'B') {
			for (int i = 0; B[i]; i++) {
				printf("%c", B[i]);
			}
		} else {
			printf("%c", a);
		}
	}
	printf("\n");
	time2 = clock();
	double d = (time2 - time1) / CLOCKS_PER_SEC;
	printf("%lf", d);
	return 0;
}