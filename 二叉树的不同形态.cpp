#include <bits/stdc++.h>
using namespace std;

typedef struct tree {
	int data;
	struct tree *lchild;
	struct tree *rchild;
} Binode, *Bitree;
int total;
int level[10000];
int in[10000];

Bitree create(int levell, int levelr, int inl, int inr) {
	if (inl > inr) {
		return NULL;
	} else {
		Bitree node = (Bitree)malloc(sizeof(Binode));
		int k, flag = 0;
		for (; levell <= levelr; ++levell) {
			for (k = inl; k <= inr; ++k) {
				if (in[k] == level[levell]) {
					flag = 1;
					break;
				}
			}
			if (flag == 1) {
				break;
			}
		}
		node->data = level[levell];
		node->lchild = create(levell + 1, levelr, inl, k - 1);
		node->rchild = create(levell + 1, levelr, k + 1, inr);
		return node;
	}
}

void leaf(Bitree node) {
	if (node == NULL) {
		return;
	} else {
		if (node->lchild == NULL && node->rchild == NULL) {
			printf("%d ", node->data);
		}
		leaf(node->lchild);
		leaf(node->rchild);
	}
}

void pre(Bitree node) {
	if (node) {
		printf("%d ", node->data);
		pre(node->lchild);
		pre(node->rchild);
	}
}

void post(Bitree node) {
	if (node) {
		post(node->lchild);
		post(node->rchild);
		printf("%d ", node->data);
	}
}

int main() {
	scanf("%d", &total);
	for (int i = 0; i < total; i++) {
		scanf("%d", &level[i]);
	}
	for (int i = 0; i < total; i++) {
		scanf("%d", &in[i]);
	}
	Bitree root = create(0, total - 1, 0, total - 1);
	leaf(root);
	printf("\n");
	pre(root);
	printf("\n");
	post(root);
	return 0;
}