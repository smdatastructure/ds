#include <stdio.h>

int main(void)
{
	char arr[20];
	printf("문자열을 입력하세요 :");
	scanf("%s", arr);

	int i = 0;

	while (arr[i] != 0)
		i++;
		
	printf("입력된 문자열은\n\"%s\"\n입니다!\n",arr);

	printf("입력된 문자열의 길이=%d", i);
	return 0;
}