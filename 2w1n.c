/*���̾Ƹ��
�߰� �κ��� *�� ����(Ȧ��)�� �Է¹ް�
���̾Ƹ�尡 ��µǴ� ���α׷��� �����Ͻÿ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int iValue, istar, iblank;

	printf("�߰��κ��� Ȧ�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &iValue);

	for (istar = 1; istar <= iValue; istar++) {
		if (istar % 2 == 0)
			continue;
		for (iblank = 0; iblank < ((iValue - istar) / 2); iblank++)
			printf(" ");
		for (iblank = 0; iblank < istar; iblank++) {
			printf("*");
		}
		printf("\n");
	}
	for (istar = (iValue - 1); istar >= 1; istar--) {
		if (istar % 2 == 0)
			continue;
		for (iblank = 0; iblank < ((iValue - istar) / 2); iblank++)
			printf(" ");

		for (iblank = 0; iblank < istar; iblank++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
