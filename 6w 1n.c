#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

 int main() 
{
	char s[100];
	int i, j, len;
	int k = 1;

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", s);

	len = strlen(s);
	j = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[j])
		{
			k = 0;
			break;
		}
		j--;
	}
	if (k)
		printf("ȸ���Դϴ�.");
	else
		printf("ȸ���� �ƴմϴ�.");

}