//56. 재귀함수 분석

#include <stdio.h>

void Recur(int n) {
	if (n == 0)
		return;

	Recur(n - 1);

	printf("%d ", n);
}


int main() {
//	freopen("input.txt", "rt", stdin);
	int number;
	scanf("%d", &number);
	Recur(number);
}

