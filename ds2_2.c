#include <stdio.h>

int main(void)
{
	char arr[20];
	printf("���ڿ��� �Է��ϼ��� :");
	scanf("%s", arr);

	int i = 0;

	while (arr[i] != 0)
		i++;
		
	printf("�Էµ� ���ڿ���\n\"%s\"\n�Դϴ�!\n",arr);

	printf("�Էµ� ���ڿ��� ����=%d", i);
	return 0;
}