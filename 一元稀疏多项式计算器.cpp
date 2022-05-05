#include <bits/stdc++.h>

typedef struct poly {
	int coe;
	int ind;
	struct poly *next;
} poly;

int main() {
	int n, m, t;
	scanf("%d %d", &n, &m);
	poly *p, *q, *head1, *head2, *tail1, *tail2, *head3, *tail3, *r, *s;
	p = (poly *)malloc(sizeof(poly));
	q = (poly *)malloc(sizeof(poly));
	scanf("%d %d", &p->coe, &p->ind);
	p->next = q;
	head1 = p;
	p = q;
	for (int i = 0; i < n - 1; i++) {
		p = (poly *)malloc(sizeof(poly));
		p = q->next;
		scanf("%d %d", &p->coe, &p->ind);
		q = p;
	}
	p->next = NULL;
	tail1 = p;
	p = (poly *)malloc(sizeof(poly));
	q = (poly *)malloc(sizeof(poly));
	scanf("%d %d", &p->coe, &p->ind);
	p->next = q;
	head2 = p;
	p = q;
	for (int i = 0; i < m - 1; i++) {
		p = (poly *)malloc(sizeof(poly));
		p = q->next;
		scanf("%d %d", &p->coe, &p->ind);
		q = p;
	}
	p->next = NULL;
	tail2 = p;
	p = head1;
	q = head2;
	int flag = 0;
	if (t == 0) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (p->ind == q->ind) {
					if (flag == 0) {
						r = (poly *)malloc(sizeof(poly));
						r->coe = p->coe + q->coe;
						r->ind = p->ind;
						flag++;
						head3 = r;
						s = (poly *)malloc(sizeof(poly));
						r->next = s;
						s->next = NULL;
						tail3 = s;
						r = s;
					} else {
						s = (poly *)malloc(sizeof(poly));
						s->coe = s->coe + q->coe;
						s->ind = q->ind;
						r->next = s;
						s->next = NULL;
						tail3 = s;
						r = s;
					}
				}
			}
			p = p->next;
			q = head2;
		}
	}
	flag = 0;
	if (t == 1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (p->ind == q->ind) {
					if (flag == 0) {
						r = (poly *)malloc(sizeof(poly));
						r->coe = p->coe - q->coe;
						r->ind = p->ind;
						flag++;
						head3 = r;
						s = (poly *)malloc(sizeof(poly));
						r->next = s;
						s->next = NULL;
						tail3 = s;
						r = s;
					} else {
						s = (poly *)malloc(sizeof(poly));
						s->coe = s->coe - q->coe;
						s->ind = q->ind;
						r->next = s;
						s->next = NULL;
						tail3 = s;
						r = s;
					}
				}
			}
			p = p->next;
			q = head2;
		}
	}
	p = head3;
	q = head3;
	r = head3;
	int min_ind, min_coe;
	flag = 0;
	while (p->next != NULL) {
		while (q->next != NULL) {
			if (r->ind > q->ind) {
				r = q;
			}
			q = q->next;
		}
		if (flag = 0) {
			head = r;
			r->next =
		}
	}
	return 0;
}