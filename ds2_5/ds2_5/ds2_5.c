#include <stdio.h>
int fact(int n)
{
	int num;
	if (n == 1)
	{
		printf("\nfact(1)�Լ� ȣ��!");
		printf("\nfact(1)�� 1 ��ȯ!");
		return 1;
	}
	else
	{
		printf("\nfact(%d)�Լ� ȣ��!", n);
		num = n * fact(n - 1);
		printf("\nfact(%d)�� %d ��ȯ!", n, num);
		return num;

	}
}

int main(void)
{
	int x=0;
	int fac;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &x);
	fac = fact(x);

	printf("\n\n%d�� ���丮�� ���� %d�Դϴ�.", x, fac);

	return 0;
}