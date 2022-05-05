#include <bits/stdc++.h>
using namespace std;

typedef struct tree {
	char data;
	struct tree *lchild;
	struct tree *rchild;
} trnode;
char pre[100];
char mid[100];

trnode *create(int i, int j, int len) {
	if (len <= 0) {
		return NULL;
	} else {
		trnode *node = (trnode *)malloc(sizeof(trnode));
		node->data = pre[i];
		char *p = mid;
		for (p = mid; p != NULL; p++) {
			if (*p == pre[i])
				break;
		}
		int m = p - mid;
		node->lchild = create(i + 1, j, m - j);
		node->rchild = create(i + (m - j) + 1, m + 1, len - 1 - (m - j));
		return node;
	}
}

void post(trnode *root) {
	if (root) {
		post(root->lchild);
		post(root->rchild);
		printf("%c", root->data);
	}
}

int main() {
	scanf("%s%s", pre, mid);
	int len = strlen(pre);
	trnode *root = NULL;
	root = create(0, 0, len);
	post(root);
	return 0;
}