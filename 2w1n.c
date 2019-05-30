/*다이아몬드
중간 부분의 *의 개수(홀수)를 입력받고
다이아몬드가 출력되는 프로그램을 구성하시오.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int iValue, istar, iblank;

	printf("중간부분의 홀수 값을 입력하시오 : ");
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
