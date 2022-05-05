#include <stdio.h>
#include <stdlib.h>

typedef struct circle {
	int seq;
	int num;
	struct circle *next;
} cir;

int main() {
	cir *p, *q, *head;
	int m, n;
	scanf("%d %d", &n, &m);
	q = (cir *)malloc(sizeof(cir));
	scanf("%d", &q->num);
	q->seq = 1;
	head = q;
	q->next = head;
	p = q;
	for (int i = 1; i < n; i++) {
		q = (cir *)malloc(sizeof(cir));
		p->next = q;
		scanf("%d", &q->num);
		q->seq = i + 1;
		p = q;
		q->next = head;
	}
	while (p->next != p) {
		for (int i = 0; i < m - 1; i++) {
			p = p->next;
		}
		printf("%d ", p->next->seq);
		q = p->next;
		p->next = p->next->next;
		m = q->num;
		free(q);
	}
	printf("%d\n", p->seq);
	free(p);
	return 0;
}
