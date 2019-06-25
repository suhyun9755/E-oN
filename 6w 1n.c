#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

 int main() 
{
	char s[100];
	int i, j, len;
	int k = 1;

	printf("문자열을 입력하세요 : ");
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
		printf("회문입니다.");
	else
		printf("회문이 아닙니다.");

}