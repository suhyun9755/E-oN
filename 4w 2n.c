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
		printf("숫자를 입력하시오 : ");
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

	printf("===============종류============\n");

	printf("PUSH : 1\n");
	printf("POP  : 2\n");
	printf("SHOW : 3\n");
	printf("종료하려면 1,2,3 이외의 다른 숫자를 입력하시오.\n\n\n");
	while (1) {

		printf("메뉴를 선택하세요 : ");
		scanf("%d", &num);

		if (num == 1 || num == 2 || num == 3)
		{
			function(&num);

		}
		else {
			printf("==========프로그램 종료==========\n");
			break;
		}
	}
}
