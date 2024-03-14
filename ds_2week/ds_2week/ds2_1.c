#include <stdio.h>

int main(void)
{
	char* ptr[4] = { "Korea", "Seoul", "Mapo", "152¹øÁö 2\/3" };
	int i;
	
	for(i=0;i<4;i++)
		printf("%s\n", ptr[i]);

	ptr[2] = "Jongno";

	printf("\n\n\n\n");

	for (i = 0; i < 4; i++)
		printf("%s\n", ptr[i]);

	return 0;
}