#include <bits/stdc++.h>

typedef struct link {
	char address[10000];
	int key;
	char next[10000];
	struct link *ne;
} link;

int main() {
	int n;
	char ini[10000] = {0};
	scanf("%s%d", ini, &n);
	//clock_t sta = clock();
	link s[n];
	link *head = (link *)malloc(sizeof(link));
	for (int i = 0; i < n; i++) {
		scanf("%s%d%s", s[i].address, &s[i].key, s[i].next);
		if (strcmp(s[i].address, ini) == 0) {
			head->ne = &s[i];
		}
	}
	//printf("%d", s[0].key);
	link *q = head;
	link *p = s;
	//printf("%d", p->key);
	while (q->ne->next[0] != '-') {
		if (strcmp(q->ne->next, p->address) == 0) {
			q->ne->ne = p;
			q = q->ne;
			p = s;
			continue;
		} else {
			p++;
		}
	}
	q->ne->ne = NULL;
	/*q = head;
	p = q->ne;
	while (q->ne->next[0] != '-') {
		printf("%s\n", q->ne->address);
		q = q->ne;
	}
	printf("%s\n", q->ne->address);*/
	//此处要写一段删除所有重复节点的代码
	p = head->ne;
	q = p->ne;
	while (p->ne != NULL) {
		while (q != NULL) {
			if (abs(q->key) == abs(p->key)) {
				link *t = p;
				while (t->ne != q) {
					t = t->ne;
				}
				for (int i = 0; t->next[i] != 0; i++) {
					t->next[i] = 0;
				}
				for (int i = 0; q->next[i] != 0; i++) {
					t->next[i] = q->next[i];
				}
				t->ne = q->ne;
				n--;
				q = t->ne;
			} else {
				q = q->ne;
			}
		}
		if (p->ne != NULL) {
			p = p->ne;
			q = p->ne;
		} else {
			break;
		}
	}
	printf("%d\n", n);
	q = head;
	while (q->ne->next[0] != '-') {
		printf("%s %d %s\n", q->ne->address, q->ne->key, q->ne->next);
		q = q->ne;
	}
	printf("%s %d %s", q->ne->address, q->ne->key, q->ne->next);
	//clock_t end = clock();
	//printf("%lf", (end - sta) / CLOCKS_PER_SEC);
	return 0;
}