#include <bits/stdc++.h>
using namespace std;

typedef struct tree {
	int data;
	struct tree *lchild, *rchild;
} Binode, *Bitree;
int n;
Binode s[1000];
queue<Bitree>d;

Bitree create(Bitree node, int i) {
	if (i > n) {
		return NULL;
	} else {
		node->lchild = create(s + 2 * i, 2 * i);
		node->rchild = create(s + 2 * i + 1, 2 * i + 1);
		return node;
	}
}

void adjust(Bitree node) {
	if (node->lchild != NULL &&) {

	}
}

void out_level(Bitree node) {
	d.push(node);
	while (!d.empty()) {
		Bitree q = d.front();
		printf("%d ", q->data);
		d.pop();
		if (q->lchild) {
			d.push(q->lchild);
		}
		if (q->rchild) {
			d.push(q->rchild);
		}
	}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &s[i]);
	}
	Bitree head = create(s + 1, 1); //建立堆
	adjust(head);//调整堆
	out_level(head);//层序遍历
	return 0;
}