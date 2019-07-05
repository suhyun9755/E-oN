#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Test(int number[],int n,int top,int fin)
{
    int a = number[top], mid = 0;
    for (int i = top + 1; i <= fin; i++)
    {
       if (a < number[i])
       {
           a = number[i], mid = i;
       }
   }
   return mid;
}

int main(void)
{
	int i, n, m, number[100];
	
	printf("작업의 수와 작업 번호를 입력하세요 : ");
	scanf("%d %d\n", &n, &m);
	int top = 0, mid = 0;
	int fin = n - 1;

	for (i = 0; i < n; i++)
	{
		scanf("%d", &number[i]);
	}

	while (top - 1 != m)
	{
		mid = Test(number, n, top, mid);
	
		         for (i = top; i < mid; i++)
			        {
			            number[++fin] = number[top++];
			           m = n == top - 1 ? fin : m;
					}
		         top++;
		         mid++;
	}
	printf("결과 : %d\n", fin);

	return 0;
}