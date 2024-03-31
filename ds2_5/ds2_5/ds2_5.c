#include <stdio.h>
int fact(int n)
{
	int num;
	if (n == 1)
	{
		printf("\nfact(1)함수 호출!");
		printf("\nfact(1)값 1 반환!");
		return 1;
	}
	else
	{
		printf("\nfact(%d)함수 호출!", n);
		num = n * fact(n - 1);
		printf("\nfact(%d)값 %d 반환!", n, num);
		return num;

	}
}

int main(void)
{
	int x=0;
	int fac;
	printf("정수를 입력하세요 : ");
	scanf("%d", &x);
	fac = fact(x);

	printf("\n\n%d의 팩토리얼 값은 %d입니다.", x, fac);

	return 0;
}