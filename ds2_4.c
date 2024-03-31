#include <stdio.h>

int main(void)
{
	int i, j, k;
	char sen[2][3][20];

	for (i = 0; i < 2; i++)
	{
		printf("\n학생%d의 이름:", i + 1);
		gets(sen[i][0]);
		printf("학생%d의 학과:", i + 1);
		gets(sen[i][1]);
		printf("학생%d의 학번:", i + 1);
		gets(sen[i][2]);
	}

	for (i = 0; i < 2; i++)
	{
		printf("\n\n학생%d", i + 1);
		for (j = 0; j < 3; j++)
		{
			printf("\n\t");
			for (k = 0; sen[i][j][k] != '\0'; k++)
			{
				printf("%c", sen[i][j][k]);
			}
		}
	}

	getchar();

}