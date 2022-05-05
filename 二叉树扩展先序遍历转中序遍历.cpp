#include <bits/stdc++.h>
using namespace std;

typedef struct tree {
	char a;
	struct tree *lchild, *rchild;
} tree;
deque<char>fnl;

void mid(tree *dot) {
	if (dot->lchild != NULL) {
		tree *node = dot->lchild;
		mid(node);
	}
	fnl.push_back(dot->a);
	if (dot->rchild != NULL) {
		tree *node = dot->rchild;
		mid(node);
	}
}

int main() {
	char s[1000] = {};
	scanf("%s", s);
	int flag = 0;
	tree *root = (tree *)malloc(sizeof(tree));
	tree *p = root;
	stack<tree *>rec;
	int rec_r = 0;
	for (int i = 0; s[i] != 0; i++) {
		if (s[i] == '#') {
			flag++;
		}
		if (!flag) {
			p->a = s[i];
			rec.push(p);
			tree *q = (tree *)malloc(sizeof(tree));
			p->lchild = q;
			p = q;
		} else if (flag == 1 && s[i] == '#') {
			p = rec.top();
			p->lchild = NULL;
			tree *q = (tree *)malloc(sizeof(tree));
			p->rchild = q;
			p = q;
			continue;
		} else if (flag == 1 && s[i] != '#') {
			p->a = s[i];
			rec.pop();
			rec.push(p);
			tree *q = (tree *)malloc(sizeof(tree));
			p->lchild = q;
			p = q;
			flag = 0;
		} else if (flag == 2) {
			p = rec.top();
			rec.pop();
			p->rchild = NULL;
			if (!rec.empty()) {
				p = rec.top();
				tree *q = (tree *)malloc(sizeof(tree));
				p->rchild = q;
				p = q;
				flag = 0;
				if (s[i + 1] != 0 && s[i + 1] != '#') {
					rec.pop();
				} else {
					p = rec.top();
					p->rchild = NULL;
					flag = 2;
					continue;
				}
			}
		}
	}
	mid(root);
	while (!fnl.empty()) {
		printf("%c ", fnl.front());
		fnl.pop_front();
	}
	return 0;
}