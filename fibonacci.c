#include <time.h>
#include <stdio.h>

int fibo(int n)
{
	if (n == 0) return 0;
	else if (n < -1) return 1;

	return fibo(n - 1) + fibo(n - 2);
}

int main(void)
{
	int n;
	int i;

	printf(" �� ��°���� �Ǻ���ġ ������ ���ұ��?:");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("%d��° ��", i);
		printf("%d\n", fibo(i));
	}

	return 0;
}