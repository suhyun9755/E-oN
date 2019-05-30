/*두 사각형 좌표가 주어질 때 두 사각형이 오버랩(overlap) 되는지 아닌지를 판단하는 프로그램을 작성하시오. 
변을 공유하거나 꼭지점을 공유하는 경우에도 overlap 되는 것으로 간주한다.*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int x1, y1, x2, y2;
	int x3, y3, x4, y4;

	printf("1좌표를 입력 하시오 : ");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	printf("2좌표를 입력 하시오 : ");
	scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

	if ((x1 <= x3 && x3 <= x2) || (x1 <= x4 && x4 <= x2) || (x3 <= x2 && x2 <= x4) || (x3 <= x1 && x1 <= x4))
	{
		if ((y1 <= y3 && y3 <= y2) || (y1 <= y4 && y4 <= y2) || (y3 <= y2 && y2 <= y4) || (y3 <= y1 && y1 <= y4))
		{
			printf("Overlap");
		}
		else 
		{
			printf("No overlap");
		}
	}
	else if ((y1 <= y3 && y3 <= y2) || (y1 <= y4 && y4 <= y2) || (y3 <= y1 && y1 <= y4) || (y3 <= y2 && y2 <= y4))
	{
		if ((x1 <= x3 && x3 <= x2) || (x1 <= x4 && x4 <= x2) || (x3 <= x1 && x1 <= x4) || (x3 <= x2 && x2 <= x4))
		{
			printf("Overlap\n");
		}
		else
		{
			printf("No overlap\n");
		}
	}
	else
		printf("No overlap");

	return 0;
}