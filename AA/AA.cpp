//9. 모두의 약수
#include <stdio.h>
int main() {

	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		int cnt = 0;
		int quotient = i;

		//약수 개수 구하기
		if (i == 1)//1의 약수 개수 무조건 1 // else 조건으로 반복문 실행하면 0 이 출력됨
			printf("%d ", 1);
		else {//2부터 약수 개수 구하기 반복문 횟수 줄이기 위해서 나누는 값으 1부터 n 까지 하지말고 몫 직전까지 
			for (int j = 1; j < quotient; ++j) {
				if (i % j == 0) {
					quotient = i / j;
					if (j == quotient)  
						cnt += 1; // 제곱수의 경우 약수 개수 1개 증가
					else
						cnt += 2; // 제곱 수가 아닌 이상 약수의 개수 2개씩 증가
				}
			}

			printf("%d ", cnt);
		}
	}

	return 0;

}

////55.기차운행(stack)
//#include <stdio.h>
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
//int Empty() {
//	if (top == 0) return 1;
//	return 0;
//}
//
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int N;
//	scanf("%d", &N);
//
//	int i, m, check = 1, j = 0;
//	char ch[61];
//
//	for (i = 0; i < N; ++i) {
//		scanf("%d", &m);
//		Push(m);
//		ch[j++] = 'P';
//		while (1) {
//			if (Empty()) break;
//			if (stack[top - 1] == check) {
//				Pop();
//				ch[j++] = 'O';
//				++check;
//			}
//			else
//				break;
//		}
//	}
//	if (!Empty())
//		printf("impossible\n");
//	else {
//		ch[j] = '\0';
//		printf("%s", ch);
//	}
//
//
//	return 0;
//
//}

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
//int Empty() {
//	if (top == 0) return 1;
//	return 0;
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
//	//for (int i = 0; i < N; ++i) {
//	while (1) {
//		if (i < N) {
//			Push(a[i++]);
//			ch[j++] = 'P';
//		}
//		if (i == N && stack[top - 1] > check) {//더이상 stack에 push 할 값이 없고 stack에 값은 입력되어야 할 값보다 클 경우 불가능
//			impossible = 1;
//			break;
//		}
//
//		while (1) {
//			if (Empty()) break;
//			if (check == stack[top - 1]) {
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
//		if (i == N && stack[top - 1] > check) {
//			impossible = 1;
//			break;
//		}
//
//		while (1) {
//			if (stack[top - 1] == check) {
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

////56. 재귀함수 분석
//
//#include <stdio.h>
//
//void RecursionNumber(int n) {
//	if (n == 0)
//		return;
//
//	RecursionNumber(n - 1);
//
//	printf("%d ", n);
//}
//
//
//int main() {
////	freopen("input.txt", "rt", stdin);
//	int number;
//	scanf("%d", &number);
//	RecursionNumber(number);
//}



////8.올바른 괄호 -강의
//#include <stdio.h>
//int main() {
//	char ch[100];
//	int laststring = 0;
//	int cnt = 0;
//	scanf("%s", ch);
//
//	for (int i = 0; ch[i]; ++i) {
//		if (ch[i] == '(')
//			++cnt;
//		else if (ch[i] == ')')
//			--cnt;
//		else
//			cnt = -1;
//
//		if (cnt < 0)
//			break;
//	}
//
//	if (cnt == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}

////8.올바른 괄호
//#include <stdio.h>
//int main() {
//	char ch[100];
//	int laststring = 0;
//	int cnt = 0;
//	scanf("%s", ch);
//
//	for (int i = 0; ch[i]; ++i) {
//		laststring = i;
//	}
//
//	for (int j = laststring; j >= 0; --j) {
//		if (ch[j] == '(')
//			--cnt;
//		else if (ch[j] == ')')
//			++cnt;
//		else
//			cnt = -1;
//
//		if (cnt < 0)
//			break;
//	}
//
//	if (cnt == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	
//	return 0;
//}




////7.영어단어복구-강의풀이
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	char str[101], restr[101];
//
//	gets_s(str);
//	int j = 0;
//	for (int i = 0; str[i]; ++i) {
//		if (str[i] != ' ') {
//			if (str[i] >= 65 && str[i] <= 90)//A: 65, Z: 90
//				restr[j++] = str[i] + 32; //후위 증감 대입하고 j는 1 증가
//			else
//				restr[j++] = str[i]; 
//		}
//	}
//	restr[j] = '\0'; //문자열 마지막에 널 문자 입력으로 %s로 출력하기 위해
//	printf("%s",restr);
//
//	return 0;
//}

////7.영어단어복구
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	char str[101];
//	gets_s(str);
//
//	for (int i = 0; str[i]; ++i) {
//		if (str[i] >= 65 && str[i] <= 122) {
//			{
//				if (str[i] >= 65 && str[i] <= 90) {
//					str[i] = str[i] + 32;
//				}
//				printf("%c", str[i]);
//			}
//		}
//	}	
//
//	return 0;
//}

////6.숫자만 추출
//#include<stdio.h>
//
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	char ch[10];
//	int num = 0;
//	int ten = 0;
//	int cnt = 0;
//	scanf("%s", ch);
//	for (int i = 0; ch[i]; ++i) {
//		if (ch[i] >= 48 && ch[i] <= 57) {
//			num = ((num * 10) + (ch[i] - 48));
//			++ten;
//		}
//	}
//
//	int j = num;
//	for (int i = 1; i < j; ++i) {
//		if (num % i == 0) {
//			j = num / i;
//			cnt += 2;;
//		}
//	}
//	printf("%d\n", num);
//	printf("%d", cnt);
//
//
//	return 0;
//}

////6.숫자만 추출
//#include<stdio.h>
//
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	char ch[60];
//	int num = 0;
//	int ten = 0;
//	int cnt = 0;
//	scanf("%s", ch);
//	for (int i = 0; ch[i]; ++i) {
//		if (ch[i] > 47 && ch[i] < 58) {
//			num = ((ch[i] - 48) + (num * 10));
//			++ten;
//		}
//	}
//
//	int j = num;
//	for (int i = 1; i < j; ++i) {
//		if (num % i == 0) {
//			j = num / i;
//			cnt += 2;;
//		}
//	}
//	printf("%d\n", num);
//	printf("%d", cnt);
//
//
//	return 0;
//}

////5.나이계산
//#include<stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	//freopen("output.txt", "wt", stdout);
//	char ch[15] ;
//	int year;
//	int age;
//	scanf("%s", ch);
//	if (ch[0] != '0')
//	{
//		year = (ch[0]-48) * 10 + (ch[1]-48) + 1900;
//		age = 2019 - year + 1;
//		printf("%d ", age);
//		if (ch[7] == '1')
//			printf("M");
//		else
//			printf("W");
//	}
//	else {
//		year = (ch[0]-48) * 10 + (ch[1]-48) + 2000;
//		age = 2019 - year + 1;
//		printf("%d ", age);
//		if (ch[7] == '3')
//			printf("M");
//		else
//			printf("W");
//	}
//
//	return 0;
//}

////4.나이차
//#include<iostream>
//using namespace std;
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	//freopen("output.txt", "wt", stdout);
//	int n, i, a, max = -2147000000, min = 2147000000;
//	scanf_s("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		cin >> a;
//		if (a > max) max = a;
//		if (a < min) min = a;
//	}
//	cout << max - min;
//	return 0;
//}

////4. 나이차
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int max, min;
//	int T;
//	scanf("%d", &T);
//
//	int* pt = (int*)malloc(sizeof(int) * T);
//
//	for (int i = 0; i < T; ++i) {
//		scanf("%d",pt+i);
//	}
//	max = pt[0];
//	min = pt[0];
//
//	for (int j = 0; j < T; ++j) {
//		if (max < pt[j])
//			max = pt[j];
//		if (min > pt[j])
//			min = pt[j];
//	}
//
//	printf("%d", max - min);
//
//	free(pt);
//
//}


////3. 진약수
//#include <stdio.h>
//#define MAX_N 100
//
//int num[MAX_N] = { 0 };
//int main()
//{
//
//	int i, j,
//	int n;
//	scanf_s("%d", &n);
//	j = 0;
//	int sum = 1;
//	printf("1");
//	for (i = 2; i < n; ++i) {
//		if (n % i == 0) {
//			sum += i;
//			printf("+%d",i);
//		}
//	}
//	
//	printf("=%d", sum);
//}

////3. 진약수
//#include <stdio.h>
//#define MAX_N 100
//
//int num[MAX_N] = { 0 };
//int main()
//{
//
//	int i, j, mod;
//	int sum = 0;
//	int n;
//	scanf_s("%d", &n);
//	j = 0;
//	for (i = 1; i < n; ++i) {
//		if (n % i == 0){
//			sum += i;
//			num[j] = i;
//			++j;
//		}
//	}
//	--j;
//	for (int k = 0; k <= j; ++k)
//		if (k == j)
//			printf("%d=", num[k]);
//		else
//			printf("%d+", num[k]);
//
//	printf("%d", sum);
//}

//#include <stdio.h>
//#define MAX_N 100
//
//int num[MAX_N] = { 0 };
//int main()
//{
//
//	int i, j, mod;
//	int sum = 0;
//	int n;
//	scanf_s("%d", &n);
//	j = n;
//	for (i = 1; i < j; ++i) {
//		mod = n % i;
//		if (mod == 0) {
//			j = n/i;
//			sum += i;
//			sum += j;
//		}
//	}
//
//	printf("=%d", sum-n);
//}

//#include <stdio.h>
//#define MAX_N 100
//
//int main()
//{
//	int a, b, sum = 0;
//	scanf("%d %d", &a, &b);
//
//	for (int i = a; i <= b; ++i) {
//		sum += i;
//		if (i != b)
//			printf("%d+", i);
//		else
//			printf("%d=");
//	}
//	printf("%d",sum);
//}

//// AA.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//
//int main()
//{
//	int a, b;
//	int sum = 0;
//
//	scanf_s("%d%d",&a,&b);
//
//
//	for (int i = 1; i <= a; ++i) {
//		if(i%b==0)
//			sum += i;
//	}
//
//	printf("%d\n",sum);
//
//}
//
