#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct stack_str {
	int stack[10];
}stack_program;

void function(int *num)
{
	static int i = 0;
	static stack_program stack1;

	if (*num == 1)
	{
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf("%d", &(stack1.stack[i++]));
	}

	else if (*num == 2)
	{
		stack1.stack[i--] = 0;
	}

	else if (*num == 3)
	{
		for (int j= 0; j < i; j++)
		{
			printf("%d", stack1.stack[j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int num;

	printf("===============����============\n");

	printf("PUSH : 1\n");
	printf("POP  : 2\n");
	printf("SHOW : 3\n");
	printf("�����Ϸ��� 1,2,3 �̿��� �ٸ� ���ڸ� �Է��Ͻÿ�.\n\n\n");
	while (1) {

		printf("�޴��� �����ϼ��� : ");
		scanf("%d", &num);

		if (num == 1 || num == 2 || num == 3)
		{
			function(&num);

		}
		else {
			printf("==========���α׷� ����==========\n");
			break;
		}
	}
}
