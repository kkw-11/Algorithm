////53. K진수 출력
////강의풀이
//#include<stdio.h>
//#include<stack>
//using namespace std;
//
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int N, numsys, mod, quotient = 1;
//	char str[20] = "0123456789ABCDEF";
//	stack<int> s;
//
//	scanf("%d%d", &N, &numsys);
//
//
//	quotient = N;
//	while (quotient) {
//		mod = quotient % numsys;
//		s.push(mod);
//		quotient /= numsys;
//	}
//
//	while (!s.empty()) {
//		printf("%c", str[s.top()]);
//		s.pop();
//	}
//
//
//	return 0;
//}

//53. K진수 출력
#include<stdio.h>
int stack[20];
int top;

void InitStack() {
	top = -1;
}
void Push(int data) {
	if (top == 19) return;
	stack[++top] = data;
}
int Pop() {
	if (top == -1) return -1;
	return stack[top--];
}

int main() {
	//freopen("input.txt", "rt", stdin);
	int N, numsys, mod, quotient = 1;

	scanf("%d%d", &N, &numsys);
	InitStack();
	quotient = N;
	while (quotient) {
		mod = quotient % numsys;
		Push(mod);
		quotient /= numsys;
	}

	while (top != -1) {
		if (numsys == 16)
			printf("%X", Pop());
		else
			printf("%d", Pop());
	}

	return 0;
}