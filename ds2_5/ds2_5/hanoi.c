#include <stdio.h>
void hanoi(int n, char A, char B, char C) {
	if (n == 1) {
		printf("%c에서 원반 1를(을) %c로 옮김\n", A, C);
	}
	else {
		hanoi(n - 1, A, B, C);
		printf("%c에서 원반 %d를(을) %c로 옮김\n", A, n, C);
		hanoi(n - 1, A, B, C);
	}
}

int main(){
	hanoi(3, 'A', 'B', 'C');
	return 0;
}