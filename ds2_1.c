#include <stdio.h>

int main(void)
{
	char sen;
	char arr[20];
	printf("문자열을 입력하세요 :\n");
	scanf("%s", sen);
	char arr[20] = sen;

	int i = 0;
	whlie(arr[i] != \0)
	{
		i++;
	}

	printf("입력된 문자열의 길이=%d", i);
	return 0;
}