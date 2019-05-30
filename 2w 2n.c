/*
크기가 10인 배열을 설정하고, Push, Pop, Show(스택에 있는 데이터들을 출력)연산을 수행하는 프로그램을 만드시오.
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
		printf("숫자를 입력하시오 : ");
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
			function(num);

		}
		else {
			printf("==========프로그램 종료==========\n");
			break;
		}
	}
}
