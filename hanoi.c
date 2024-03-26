#include <stdio.h>
void hanoi(int n, char A, char B, char C) {
	if (n == 1) {
		printf("%c���� ���� 1��(��) %c�� �ű�\n", A, C);
	}
	else {
		hanoi(n - 1, A, B, C);
		printf("%c���� ���� %d��(��) %c�� �ű�\n", A, n, C);
		hanoi(n - 1, A, B, C);
	}
}

int main(){
	hanoi(3, 'A', 'B', 'C');
	return 0;
}