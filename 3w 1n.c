/*�� �簢�� ��ǥ�� �־��� �� �� �簢���� ������(overlap) �Ǵ��� �ƴ����� �Ǵ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
���� �����ϰų� �������� �����ϴ� ��쿡�� overlap �Ǵ� ������ �����Ѵ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int x1, y1, x2, y2;
	int x3, y3, x4, y4;

	printf("1��ǥ�� �Է� �Ͻÿ� : ");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	printf("2��ǥ�� �Է� �Ͻÿ� : ");
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