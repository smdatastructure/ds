#include <stdio.h>

int main(void)
{
	int i, j, k;
	char sen[2][3][20];

	for (i = 0; i < 2; i++)
	{
		printf("\n�л�%d�� �̸�:", i + 1);
		gets(sen[i][0]);
		printf("�л�%d�� �а�:", i + 1);
		gets(sen[i][1]);
		printf("�л�%d�� �й�:", i + 1);
		gets(sen[i][2]);
	}

	for (i = 0; i < 2; i++)
	{
		printf("\n\n�л�%d", i + 1);
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