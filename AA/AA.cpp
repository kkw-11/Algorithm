//55.기차운행(stack)
#include <stdio.h>
#include <stack>
using namespace std;
int main() {
	stack<int> s;
	int N;
	scanf("%d", &N);
	int num[30];
	int stack[30];
	int check = 1;
	for (int i = 0; i < N; ++i) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < N; ++i) {
		s.push(num[i]);
		if (num[i] == check) {
			s.pop();
			++check;
		}

	}
	
	return 0;
}

//55.올바른괄호 (STL stack)
//#include <stdio.h>
//#include <stack>
//using namespace std;
//
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	stack<char> s;
//	int flag = 0; //상태 변수
//	char ch[100];
//	scanf("%s", ch);
//	for (int i = 0; ch[i]; ++i) {
//		if (ch[i] == '(')
//			s.push(ch[i]);
//		else {
//			if (s.empty()) { 
//				printf("NO\n");
//				++flag;
//				break;
//			}
//			s.pop();
//		}
//	}
//
//	if (flag == 0) {
//		if (s.empty()) printf("YES\n");
//		else printf("NO\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stack>
//
//char stack[100];
//int top;
//
//void InitStack() {
//	top = 0;
//}
//
//void Push(char data) {
//
//	stack[top++] = data;
//}
//
//char Pop() {
//
//	return stack[--top];
//}
//
//
//int main() {
//
//	freopen("input.txt", "rt", stdin);
//
//
//	char ch[100];
//	scanf("%s", ch);
//	for (int i = 0; ch[i]; ++i) {
//		
//		switch (ch[i])
//		{
//		case '(':
//			Push(ch[i]);
//			break;
//		case ')':
//			Pop();
//			break;
//		default:
//			break;
//		}
//
//		if (top < 0)
//			break;
//
//	}
//
//
//	if (top == 0) printf("YES\n");
//	else printf("NO\n");
//
//
//
//	return 0;
//}


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

////53. K진수 출력
//#include<stdio.h>
//int stack[20];
//int top;
//
//void InitStack() {
//	top = -1;
//}
//void Push(int data) {
//	if (top == 19) return;
//	stack[++top] = data;
//}
//int Pop() {
//	if (top == -1) return -1;
//	return stack[top--];
//}
//
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int N, numsys, mod, quotient = 1;
//
//	scanf("%d%d", &N, &numsys);
//	InitStack();
//	quotient = N;
//	while (quotient) {
//		mod = quotient % numsys;
//		Push(mod);
//		quotient /= numsys;
//	}
//
//	while (top != -1) {
//		if (numsys == 16)
//			printf("%X", Pop());
//		else
//			printf("%d", Pop());
//	}
//
//	return 0;
//}