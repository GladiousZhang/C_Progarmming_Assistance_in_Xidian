#include <bits/stdc++.h>
using namespace std;

typedef struct tree {
	int data;
	struct tree *lchild;
	struct tree *rchild;
	int sum = 0;
} Bitree, *Binode;
int pre[10000];
int mid[10000];
int total;

Binode create(int i, int j, int len) {
	if (len <= 0)
		return NULL;
	else {
		Binode node = (Binode)malloc(sizeof(Bitree));
		node->data = pre[i];
		node->sum = 0;
		int *p = mid;
		int k;
		for (k = 0; k < total; k++) {
			if (*(p + k) == pre[i]) {
				break;
			}
		}
		node->lchild = create(i + 1, j, k - j);
		node->rchild = create(i + k - j + 1, k + 1, len - 1 - (k - j));
		return node;
	}
}

void Sum_tree(Binode node) {
	if (node->lchild == NULL || node->rchild == NULL) {
		node->sum = 0;
		return ;
	} else {
		Sum_tree(node->lchild);
		Sum_tree(node->rchild);
		node->sum = node->lchild->data + node->lchild->sum + node->rchild->data + node->rchild->sum;
	}
}

void midorder(Binode root) {
	if (root) {
		midorder(root->lchild);
		printf("%d ", root->sum);
		midorder(root->rchild);
	}
}

int main() {
	scanf("%d", &total);
	for (int i = 0; i < total; i++) {
		scanf("%d", &pre[i]);
	}
	for (int i = 0; i < total; i++) {
		scanf("%d", &mid[i]);
	}
	Binode root = NULL;
	root = create(0, 0, total);
	Sum_tree(root);
	midorder(root);
	return 0;
}