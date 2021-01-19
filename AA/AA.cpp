//32. 3등 성적은?

#include <stdio.h>
int main() {
	int T;
	int grade[100] = { 0 };
	int minIdx;
	scanf("%d", &T);
	for (int i = 0; i < T; ++i) {
		scanf("%d", &grade[i]);
	}
	//오름차순 정렬
	for (int i = 0; i < T - 1; ++i) {
		minIdx = i;
		for (int j = i + 1; j < T; ++j) {
			if (grade[minIdx] > grade[j]) {
				int temp = grade[minIdx];
				grade[minIdx] = grade[j];
				grade[j] = temp;
			}
		}
	}

	//중복 값 존재 할때 3등 구하기
	int max = grade[T - 1];
	int cnt = 1;
	for (int i = T - 1; i >= 0; --i) {
		if (grade[i] < max) {
			++cnt;
			max = grade[i];
		}
		if (cnt == 3)
			break;
	}

	printf("%d", max);


	return 0;
}

////55.기차운행(stack)
//#include <stdio.h>
//#include <stack>
//#define MAX 30
//
//int stack[MAX] = { 0 };
//int top;
//
//void InitStack() {
//	top = 0;
//}
//
//void Push(int data) {
//	if (top == MAX) return;
//	stack[top++] = data;
//}
//
//int Pop() {
//	if (top == 0) return -1;
//	return stack[--top];
//}
//
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int N;
//	scanf("%d", &N);
//	int a[30];
//	char ch[61];
//	int impossible = 0, check = 1;
//
//	for (int i = 0; i < N; ++i) {
//		scanf("%d", &a[i]);
//	}
//	InitStack();
//
//	int i = 0, j = 0;
//	while (1) {
//		if (i < N) {
//			Push(a[i++]);
//			ch[j++] = 'P';
//		}
//		if (i == N && stack[top-1] > check) {
//			impossible = 1;
//			break;
//		}
//
//		while (1) {
//			if (stack[top-1] == check) {
//				Pop();
//				ch[j++] = 'O';
//				++check;
//			}
//			else
//				break;
//		}
//		
//		if (j == 2 * N)
//			break;
//	}
//
//	if (impossible)
//		printf("impossible");
//	else {
//		ch[j] = '\0';
//		printf("%s", ch);
//
//	}
//
//	return 0;
//
//}


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