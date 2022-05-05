#include <bits/stdc++.h>
using namespace std;

typedef struct huf {
	int num;
	struct huf *lchild, *rchild, *prt, *next;
	int flag = 0;
} huf;

int main() {
	int n;
	huf *min1 = (huf *)malloc(sizeof(huf));
	huf *min2 = (huf *)malloc(sizeof(huf));
	scanf("%d", &n);
	stack<huf *>node;
	huf *p;
	p = (huf *)malloc(sizeof(huf));
	huf *head1 = p;
	scanf("%d", &p->num);
	p->lchild = NULL;
	p->rchild = NULL;
	p->next = NULL;
	for (int i = 0; i < n - 1; i++) {
		huf *q = (huf *)malloc(sizeof(huf));
		scanf("%d", &q->num);
		q->lchild = NULL;
		q->rchild = NULL;
		q->next = NULL;
		p->next = q;
		p = q;
	}
	/*p = head1;
	while (p->next != NULL) {
		printf("%d ", p->num);
		p = p->next;
	}
	printf("%d", p->num);*/
	//printf("%d", head1->num);
	huf *q = p;
	p->next = NULL;
	huf *head2 = (huf *)malloc(sizeof(huf));
	huf *m = (huf *)malloc(sizeof(huf));
	while (head1->next->next != NULL) {
		p = head1;
		min1 = head1;
		while (p != NULL) {
			if (p->num < min1->num) {
				min1 = p;
			}
			p = p->next;
		}
		p = head1;
		while (p->next != NULL) {
			if (head1->num == min1->num) {
				huf *t = p;
				p = t->next;
				head1 = p;
				break;
			}
			if (p->next->num == min1->num) {
				huf *t = p->next;
				p->next = t->next;
				break;
			}
			p = p->next;
		}
		p = head1;
		min2 = head1;
		while (p != NULL) {
			if (p->num < min2->num) {
				min2 = p;
			}
			p = p->next;
		}
		p = head1;
		while (p->next != NULL) {
			if (head1->num == min2->num) {
				huf *t = p;
				p = t->next;
				head1 = p;
				break;
			}
			if (p->next->num == min2->num) {
				huf *t = p->next;
				p->next = t->next;
				break;
			}
			p = p->next;
		}
		q = head1;
		while (q->next != NULL)
			q = q->next;
		huf *m = (huf *)malloc(sizeof(huf));
		m->num = min1->num + min2->num;
		m->lchild = min1;
		m->rchild = min2;
		min1->prt = m;
		min2->prt = m;
		head2 = m;
		q->next = m;
		m->next = NULL;
		/*p = head1;
		while (p->next != NULL) {
			printf("%d ", p->num);
			p = p->next;
		}
		printf("%d\n", p->num);
		printf("%d\n%d\n%d\n", head2->num, head2->lchild->num, head2->rchild->num);*/
	}
	m->num = head1->num + head1->next->num;
	m->lchild = head1;
	m->rchild = head1->next;
	head1->prt = m;
	head1->next->prt = m;
	head2 = m;
	//printf("%d\n%d\n%d\n", head2->num, head2->lchild->num, head2->rchild->num);
	int sum = 0;
	int cnt = 0;
	p = head2;
	//printf("%d", p->lchild->rchild->num);
	p->flag = 0;
	while (cnt != n) {
		while (p->lchild != NULL) {
			p->lchild->flag = p->flag + 1;
			p->rchild->flag = p->flag + 1;
			//printf("%d ", p->rchild->num);
			node.push(p->rchild);
			//printf("%d ", p->num);
			p = p->lchild;
		}
		sum += (p->flag) * ( p->num);
		if (!node.empty()) {
			p = node.top();
			node.pop();
		}
		cnt++;
	}
	printf("%d", sum);
	return 0;
}