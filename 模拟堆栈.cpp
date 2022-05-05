#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//定义储存数据的链表
typedef struct stack {
	int num;
	struct stack *next;
} stack;

//定义储存链表的结构体
typedef struct list {
	stack *head;
	stack *tail;
} List;

//定义一个出栈的函数
void pop(int total, int times, List *list) {
	int real_times = times;//因为之后在入栈的时候对times可能有一个操作，所以这里延续那里的设计对times进行备份
	for (int i = 0; i < times; i++) {
		stack *search = (stack *)malloc(sizeof(stack));
		search = list->head;
		if (search->next) {
			while (search->next != list->tail) {
				search = search->next;
			}
			list->tail = search;
			list->tail->next = NULL;
		} else {
			list->head = NULL;
			list->tail = NULL;
		}
	}

	int flag = total - real_times;
	if (flag == 1) {
		printf("The number in the stack now is:\n");
	} else if (flag > 1) {
		printf("The numbers in the stack now are:\n");
	} else if (flag == 0) {
		printf("There is no number in the stack.\n");
	}
	stack *show = (stack *)malloc(sizeof(stack));
	show = list->head;
	while (flag > 0) {
		if (flag > 1) {
			printf("%d ", show->num);
			show = show->next;
			flag--;
		}
		if (flag == 1) {
			printf("%d\n", show->num);
			show = show->next;
			flag--;
		}
	}
}

//定义一个入栈的函数
void push(int total, int times, List *list) {
	if (times > 0)
		printf("Please input the numbers separated by Spaces.\n");
	int real_times = times;
	if (total == 0 && times != 0) {
		stack *p1 = (stack *)malloc(sizeof(stack));
		scanf("%d", &p1->num);
		p1->next = NULL;
		list->head = p1;
		list->tail = p1;
		times--;
	}
	int number;
	for (int i = 0; i < times; i++) {
		scanf("%d", &number);
		stack *p1 = (stack *)malloc(sizeof(stack));
		p1->num = number;
		p1->next = NULL;
		list->tail->next = p1;
		list->tail = p1;
	}

	int flag = total + real_times;
	if (flag == 1) {
		printf("The number in the stack now is:\n");
	} else if (flag > 1) {
		printf("The numbers in the stack now are:\n");
	} else if (flag == 0) {
		printf("There is no number in the stack.\n");
	}
	stack *show = (stack *)malloc(sizeof(stack));
	show = list->head;
	while (flag > 0) {
		if (flag > 1) {
			printf("%d ", show->num);
			show = show->next;
			flag--;
		}
		if (flag == 1) {
			printf("%d\n", show->num);
			show = show->next;
			flag--;
		}
	}
}

//定义一个返回栈顶的函数
void top(int total, List *list) {
	if (total > 0) {
		printf("The number in the top of the stack is:\n");
		printf("%d\n", list->tail->num);
	} else if (total == 0) {
		printf("There is no number in the stack.\n");
	}
}

int main() {
	char cond[5] = {};
	int times, total = 0;//times表示一次入栈或出栈几个数字，total表示栈内的总数
	List list ;
	while (1) {
		printf("If you want to pop out, please type 'pop'.\nIf you want to push in, please type 'push'.\nIf you want to show the top element, please type 'top'.\nIf you want to exit, please type 'quit'.\n");
		scanf("%s", cond);
		//执行出栈操作
		if (strcmp(cond, "pop") == 0) {
			printf("Please input how many numbers you want to pop out.\n");
			scanf("%d", &times);
			//如果栈中余数不足
			if (times > total) {
				printf("Invalid Input!\nPlease try again!\n");
				continue;
			}
			pop(total, times, &list);
			total = total - times;
			printf("Finish!\n");
		}
		//执行入栈操作
		if (strcmp(cond, "push") == 0) {
			printf("Please input how many numbers you want to push in.\n");
			scanf("%d", &times);
			push(total, times, &list);
			total += times;
			printf("Finish!\n");
		}
		//执行返回栈顶操作
		if (strcmp(cond, "top") == 0) {
			top(total, &list);
		}
		//执行结束操作
		if (strcmp(cond, "quit") == 0) {
			exit(0);
		}
		//错误输入时的显示
		if (strcmp(cond, "pop") != 0 && strcmp(cond, "push") != 0 && strcmp(cond, "top") != 0 && strcmp(cond, "quit") != 0) {
			printf("Invalid Input!\nPlease try again!\n");
		}
		for (int i = 0; i < 5; i++) {
			cond[i] = 0;
		}//每次将操作命令重置
	}
}
