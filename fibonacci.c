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

	printf(" 몇 번째까지 피보나치 수열을 구할까요?:");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("%d번째 수", i);
		printf("%d\n", fibo(i));
	}

	return 0;
}