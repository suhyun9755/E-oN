/*
ũ�Ⱑ 10�� �迭�� �����ϰ�, Push, Pop, Show(���ÿ� �ִ� �����͵��� ���)������ �����ϴ� ���α׷��� ����ÿ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int stack[10];
void function(int num)
{
	static int k = 0;
	int i = 0;

	if (num == 1)
	{
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf("%d", &stack[k]);
		k += 1;
	}

	else if (num == 2)
	{
		stack[--k] = 0;
	}

	else if (num == 3)
	{
		for (i = 1; i <= k; i++)
		{
			printf("%d", stack[i - 1]);
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
			function(num);

		}
		else {
			printf("==========���α׷� ����==========\n");
			break;
		}
	}
}
