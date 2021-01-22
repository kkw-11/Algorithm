//57. 재귀함수 이진수 출력
#include<stdio.h>
void D(int x) {
	if (x == 0) return;
	else {
		D(x / 2);
		printf("%d",x%2);
	}

}

int main() {
	int n;
	scanf("%d",&n);

	D(n);


	return 0;
}

#include <stdio.h>
int size = 0;
void Digit(int n, int digit[]) {
	if (n <= 0)	return;
	else {
		digit[size++] = n % 2;

		n = n / 2;
		Digit(n, digit);
		//printf("%d", digit[--size]);
	}
}
int main() {

	int n, digit[100];
	scanf("%d", &n);

	Digit(n, digit);
	for (int i = size - 1; i >= 0; --i) {
		printf("%d", digit[i]);
	}

	return 0;
}

////39. 두 배열 합치기
//#include<stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n1, n2, num1[100], num2[100], num3[200];
//
//	//첫 번째 배열 입력
//	scanf("%d", &n1);
//	for (int i = 0; i < n1; ++i) {
//		scanf("%d", &num1[i]);
//	}
//
//	//두 번째 배열 입력 받기
//	scanf("%d", &n2);
//	for (int i = 0; i < n2; ++i) {
//		scanf("%d", &num2[i]);
//	}
//
//	//두 배열 정렬하며 병합
//	int p1 = 0, p2 = 0, p3 = 0;
//	while (p1<n1 && p2<n2) {
//		if (num1[p1] < num2[p2]) {
//			num3[p3++] = num1[p1++];
//		}
//		else {
//			num3[p3++] = num2[p2++];
//		}		
//	}
//
//	while (p1 < n1) {
//		num3[p3++] = num1[p1++];
//	}
//
//	while (p2 < n2) {
//		num3[p3++] = num2[p2++];
//	}
//
//	//출력하기
//	for (int i = 0; i < n1 + n2; ++i) {
//		printf("%d ", num3[i]);
//	}
//
//
//	return 0;
//}
//
////39. 두 배열 합치기
//#include<stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n1, n2, num1[100], num2[100], num3[200];
//	
//	//첫 번째 배열 입력
//	scanf("%d", &n1);
//	for (int i = 0; i < n1; ++i) {
//		scanf("%d", &num1[i]);
//	}
//
//	//두 번째 배열 입력 받기
//	scanf("%d", &n2);
//	for (int i = 0; i < n2; ++i) {
//		scanf("%d", &num2[i]);
//	}
//	//두 배열 정렬하며 병합
//	int p1 = 0, p2 = 0, p3 = 0;
//	while (1) {
//		if (num1[p1] < num2[p2]) {
//			num3[p3] = num1[p1];
//			++p1;
//			++p3;
//		}
//		else {
//			num3[p3] = num2[p2];
//			++p2;
//			++p3;
//		}
//		if (p1 == n1 || p2 == n2)
//			break;
//	}
//
//	if (p1 == n1) {
//		for (int i = p2; i < n2; ++i) {
//			num3[p3] = num2[i];
//			++p3;
//		}
//	}
//	else if (p2==n2){
//		for (int i = p1; i < n1; ++i) {
//			num3[p3] = num1[i];
//			++p3;
//		}
//	}
//
//	//출력하기
//	for (int i = 0; i < n1 + n2; ++i) {
//		printf("%d ", num3[i]);
//	}
//
//
//	return 0;
//}
//
//////39. 두 배열 합치기
////#include<stdio.h>
////int main() {
////	int n,n2, num[200];
////	scanf("%d", &n);
////	//첫 번째 배열 입력
////	for (int i = 0; i < n; ++i) {
////		scanf("%d", &num[i]);
////	}
////
////	scanf("%d", &n2);
////	//두 번째 배열 첫 배열다음 인덱스부터 입력받기
////	for (int i = n; i < n + n2; ++i) {
////		scanf("%d", &num[i]);
////	}
////	//선택정렬로 배열 정렬하기
////	int j;
////	for (int i = 1; i < n + n2; ++i) {
////		int value = num[i];
////		for (j = i - 1; j >= 0; --j) {
////			if (num[j] > value)
////				num[j + 1] = num[j];
////			else {
////				num[j + 1] = value;
////				break;
////			}
////		}
////		num[j + 1] = value;
////
////	}
////
////	for (int i = 0; i < n + n2; ++i) {
////		printf("%d ", num[i]);
////	}
////
////
////	return 0;
////}
//
//
//////36. 삽입정렬
////#include <stdio.h>
////
////void PrintArray(int arr[], int size) {
////	for (int i = 0; i < size; ++i) {
////		printf("%d ", arr[i]);
////	}
////	printf("\n");
////}
////
////int main() {
////	freopen("input.txt", "rt", stdin);
////	int n;
////	int num[100];
////	scanf("%d", &n);
////
////	for (int i = 0; i < n; ++i) {
////		scanf("%d", &num[i]);
////	}
////
////	PrintArray(num, n);
////
////	int value;
////	int j;
////	for (int i = 1; i < n; ++i) {
////		value = num[i];
////		for (j = i - 1; j >= 0; --j) {
////			if (num[j] > value) {
////				num[j + 1] = num[j];
////			}
////			else {
////				break;
////			}
////		}
////		num[j + 1] = value;
////	}
////	PrintArray(num, n);
////
////
////	return 0;
////}
//
//////35 Special Sort(Google Interview)
////#include <stdio.h>
////
////void Swap(int* a, int* b) {
////	int temp = *a;
////	*a = *b;
////	*b = temp;
////}
////
////void PrintArray(int arr[], int size) {
////	for (int i = 0; i < size; ++i) {
////		printf("%d ", arr[i]);
////	}
////	printf("\n");
////}
////
////int main() {
////	//freopen("input.txt", "rt", stdin);
////	int n;
////	int num[100];
////	int num2[100];
////	scanf("%d", &n);
////
////	for (int i = 0; i < n; ++i) {
////		scanf("%d", &num[i]);
////	}
////
////	//PrintArray(num, n);
////
////	for (int i = 0; i < n - 1; ++i){
////		for (int j = 0; j < (n - 1) - i; ++j) {
////			if (num[j] > 0 && num[j + 1] < 0)
////				Swap(&num[j], &num[j + 1]);
////		}
////	}
////
////	PrintArray(num, n);
////
////	return 0;
////}
//
//////35 Special Sort(Google Interview)
////#include <stdio.h>
////
////void Swap(int* a, int* b) {
////	int temp = *a;
////	*a = *b;
////	*b = temp;
////}
////
////void PrintArray(int arr[], int size) {
////	for (int i = 0; i < size; ++i) {
////		printf("%d ", arr[i]);
////	}
////	printf("\n");
////}
////
////int main() {
////	//freopen("input.txt", "rt", stdin);
////	int n;
////	int num[100];
////	int num2[100];
////	scanf("%d", &n);
////
////	for (int i = 0; i < n; ++i) {
////		scanf("%d", &num[i]);
////	}
////
////	//PrintArray(num, n);
////	int cnt = 0;
////	int check = 0;
////	for (int i = 0; i < n; ++i) {
////		for (int j = check; j < n; ++j) {
////			if (num[j] < 0) {
////				num2[i] = num[j];
////				check = j + 1;
////				++cnt;
////				break;
////			}
////		}
////	}
////	int check2 = 0;
////	for (int i = cnt; i < n; ++i) {
////		for (int j = check2; j < n; ++j) {
////			if (num[j] > 0) {
////				num2[i] = num[j];
////				check2 = j + 1;
////				break;
////			}
////		}
////	}
////
////	PrintArray(num2, n);
////
////	
////
////	return 0;
////}
//
//////34 버블정렬
////#include <stdio.h>
////
////void Swap(int* a, int* b) {
////	int temp = *a;
////	*a = *b;
////	*b = temp;
////}
////
////void PrintArray(int arr[], int size) {
////	for (int i = 0; i < size; ++i) {
////		printf("%d ", arr[i]);
////	}
////	printf("\n");
////}
////
////int main() {
////	freopen("input.txt", "rt", stdin);
////	int n;
////	int num[100];
////	scanf("%d", &n);
////
////	for (int i = 0; i < n; ++i) {
////		scanf("%d", &num[i]);
////	}
////
////	PrintArray(num, n);
////	int cnt = 0;
////	for (int i = 0; i < n - 1; ++i) {
////		for (int j = i + 1; j < n; ++j) {
////			if (num[j] < 0) {
////				Swap(&num[j], &num[i]);
////				++cnt;
////				break;
////			}
////		}
////	}
////
////	PrintArray(num, n);
////
////	for (int i = 0; i < cnt - 1; ++i)
////		for (int j = 0; j < cnt - i - 1; ++j) {
////			if (num[j] < num[j + 1])
////				Swap(&num[j], &num[j + 1]);
////		}
////
////
////	for (int i = 0; i < n - 1; ++i) {
////		for (int j = cnt; j < n - i - 1; ++j) {
////			if (num[j] > num[j + 1])
////				Swap(&num[j], &num[j + 1]);
////		}
////	}
////
////	PrintArray(num, n);
////
////
////
////	return 0;
////}
//
//
//////34 버블정렬
////void Swap(int* a, int* b) {
////	int temp = *a;
////	*a = *b;
////	*b = temp;
////}
////
////#include <stdio.h>
////int main() {
////	int n;
////	scanf("%d", &n);
////	int num[100];
////	for (int i = 0; i < n; ++i) {
////		scanf("%d", &num[i]);
////	}
////
////	for (int i = 0; i < n-1; ++i) {
////		for (int j = 0; j < n-i-1; ++j) {
////			if (num[j] > num[j + 1]) {
////				Swap(&num[j], &num[j + 1]);
////			}
////
////		}
////	}
////
////
////	return 0;
////}
//
//////34 버블정렬
////void Swap(int* a, int* b) {
////	int temp = *a;
////	*a = *b;
////	*b = temp;
////}
////
////#include <stdio.h>
////int main() {
////	int T;
////	scanf("%d", &T);
////	int num[100];
////	for (int i = 0; i < T; ++i) {
////		scanf("%d", &num[i]);
////	}
////	for (int i = T - 1; i > 0; --i) {
////		for (int j = 0; j < i; ++j) {
////			if (num[j] > num[j + 1]) {
////				Swap(&num[j], &num[j + 1]);
////			}
////
////		}
////	}
////
////
////	return 0;
////}

////32. 3등 성적은?
//
//#include <stdio.h>
//int main() {
//	int T;
//	int grade[100] = { 0 };
//	int minIdx;
//	scanf("%d", &T);
//	for (int i = 0; i < T; ++i) {
//		scanf("%d", &grade[i]);
//	}
//	//오름차순 정렬
//	for (int i = 0; i < T - 1; ++i) {
//		minIdx = i;
//		for (int j = i + 1; j < T; ++j) {
//			if (grade[minIdx] > grade[j]) {
//				int temp = grade[minIdx];
//				grade[minIdx] = grade[j];
//				grade[j] = temp;
//			}
//		}
//	}
//
//	//중복 값 존재 할때 3등 구하기
//	int max = grade[T - 1];
//	int cnt = 1;
//	for (int i = T - 1; i >= 0; --i) {
//		if (grade[i] < max) {
//			++cnt;
//			max = grade[i];
//		}
//		if (cnt == 3)
//			break;
//	}
//
//	printf("%d", max);
//
//
//	return 0;
//}

////32 선택정렬
//#include <stdio.h>
//void Swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main() {
//	freopen("input.txt", "rt", stdin);
//
//	int num[100] = {0};
//	int n, minIdx = 0;
//	scanf("%d",&n);
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &num[i]);
//	}
//		
//	for (int i = 0; i < n - 1; ++i) {
//		//최소값 찾기
//		minIdx = i;
//		for (int j = i + 1; j < n; ++j) {
//			if (num[minIdx] > num[j])
//				minIdx = j;
//		}
//		//최소값 교환
//		Swap(&num[i],&num[minIdx]);
//
//	}
//
//	for (int i = 0; i < n; ++i) {
//		printf("%d ", num[i]);
//	}
//
//	return 0;
//}

////12.숫자의 총 개수(large)
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//
//	int d = 9, lastdigitmax = 0,i = 1;
//	int n, res = 0;
//	scanf("%d", &n);
//
//	//자리수 체크 ( 직전자리최대수 + 해당자리숫자 개수)= 해당자리 최대수
//	//ex) 3자리수 체크(직전자리 최대수 9 + 해당자리 숫자개수 90 = 99)
//	while (lastdigitmax + d < n) {
//		res = res + i * d;//직전 자리수와 사용한숫자 누적
//		++i;//현재 몇자리 인지 체크
//		lastdigitmax = lastdigitmax + d;
//		d = d * 10;
//	}
//
//	printf("%d", res + i*(n - lastdigitmax));
//	return 0;
//}


////12.숫자의 총 개수(large)
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//
//
//	int d = 9;
//	int sum = 0;
//	int n, i = 1;
//	scanf("%d", &n);
//	int res = 0;
//	while (sum + d < n) {
//		res = res + (i * d);
//		sum = sum + d;//0 + 9
//		++i;//2
//		d = d * 10;// 90
//	}
//
//	res = res + (n - sum);
//	printf("%d", res);
//	return 0;
//}



////11.숫자의 총 개수
//#include <stdio.h>
//
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int num;
//	scanf("%d", &num);
//	int digit;
//	int cnt = 0;
//	for (int i = 1; i <= num; ++i) {		
//		digit = i;
//
//		//각 숫자가 몇자리인지 카운팅 누적
//		while (digit > 0) {
//			digit = digit / 10;
//			++cnt;
//		}
//	}
//
//
//	printf("%d", cnt);
//
//	return 0;
//}


////11.숫자의 총 개수
//#include <stdio.h>
//
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int num, cnt = -1, res = 0;
//	scanf("%d", &num);
//	int digit = num;
//
//	//자리수 구하기
//	while (digit > 0) {
//		digit = digit / 10;
//		++cnt;
//	}
//
//	switch (cnt)
//	{
//	case 0:
//		res = 1 * num;
//		break;
//	case 1:
//		res = 1 * 9 + 2 * (num - 9);
//		break;
//	case 2:
//		res = 1 * 9 + 2 * 90 + 3 * (num - 99);
//		break;
//	case 3:
//		res = 1 * 9 + 2 * 90 + 3 * 900 + 4 * (num - 999);
//		break;
//	case 4:
//		res = 1 * 9 + 2 * 90 + 3 * 900 + 4 * 9000 + 5 * (num - 9999);
//		break;
//	case 5:
//		res = 1 * 9 + 2 * 90 + 3 * 900 + 4 * 9000 + 5 * 90000 + 6 * (num - 99999);
//		break;
//	default:
//		break;
//	}
//
//	printf("%d", res);
//
//	return 0;
//}


////10.자릿수의 합
//#include <stdio.h>
//#include <stdlib.h>
//int digit_sum(int x) {
//	int sum = 0;
//	while (x > 0) {
//		sum += x % 10;
//		x = x / 10;
//	}
//	return sum;
//}
//int main() {
//	freopen("input.txt", "rt", stdin);
//	int T;
//	int num, res, summaxnum, max = 0;
//	scanf("%d", &T);
//	int j = 0;
//
//	for (int i = 0; i < T; ++i) {
//		scanf("%d", &num);
//
//
//		//각자리수 합구하기
//		res = digit_sum(num);
//
//		//각 자리수 합 최대값 비교
//		if (max < res) {
//			max = res;
//			summaxnum = num; //각 자리 합 max 되는 숫자 기억
//		}
//		else if (max == res) {//자리수 합이 max값과 같게 되는 숫자가 있을 경우 기존에 저장해둔 summaxnum과 지금 num을 비교해서 큰값을 기억
//			if (num > summaxnum)
//				summaxnum = num;
//		}
//	}	
//
//	printf("%d", summaxnum);
//	return 0;
//}

////10.자릿수의 합
//#include <stdio.h>
//#include <stdlib.h>
//int digit_sum(int x) {
//	int sum = 0;
//	while (1) {
//		if (x == 0) break;
//		sum += x % 10;
//		x = x / 10;
//	}
//	return sum;
//}
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int T;
//	int res, summaxnum = 0, resnum, max = 0;
//	int arrnum[100];
//	scanf("%d", &T);
//	int j = 0;
//
//	int* pnum = (int*)malloc(sizeof(int) * T);
//	int* pres = (int*)malloc(sizeof(int) * T);
//	for (int i = 0; i < T; ++i) {
//		scanf("%d", &pnum[i]);
//		
//		
//		//각자리수 합구하기
//		pres[i] = digit_sum(pnum[i]);
//
//		//각 자리수 합 최대값 비교
//		if (max <= pres[i]) {
//			max = pres[i];
//			summaxnum = pnum[i];
//		}
//
//	}
//
//	//max값에 해당하는 숫자중 최대값 구하기
//	for (int i = 0; i < T; ++i) {
//		if (pres[i] == max)
//			if (pnum[i] > summaxnum)
//				summaxnum = pnum[i];
//	}
//
//
//	printf("%d", summaxnum);
//	free(pnum);
//	free(pres);
//	return 0;
//}

////9. 모두의 약수
//#include <stdio.h>
//int cnt[500001]; // 전역변수는 자동 0으로 초기화됨
//
//int main() {
//
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; ++i) {//1~n 까지 반복 실행
//		//약수의 개수 배수로 구하기 (i~n 까지 i의 배수에 1씩 더하기)
//		for (int j = i; j <= n; j = j + i) {
//			++cnt[j];
//		}
//	}
//
//	for (int i = 1; i <= n; ++i) {
//		printf("%d ",cnt[i]);
//	}
//
//	return 0;
//
//}

////9. 모두의 약수
//#include <stdio.h>
//int main() {
//
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; ++i) {
//		int cnt = 0;
//		int quotient = i;
//
//		//약수 개수 구하기
//		if (i == 1)//1의 약수 개수 무조건 1 // else 조건으로 반복문 실행하면 0 이 출력됨
//			printf("%d ", 1);
//		else {//2부터 약수 개수 구하기 반복문 횟수 줄이기 위해서 나누는 값으 1부터 n 까지 하지말고 몫 직전까지 
//			for (int j = 1; j < quotient; ++j) {
//				if (i % j == 0) {
//					quotient = i / j;
//					if (j == quotient)  
//						cnt += 1; // 제곱수의 경우 약수 개수 1개 증가
//					else
//						cnt += 2; // 제곱 수가 아닌 이상 약수의 개수 2개씩 증가
//				}
//			}
//
//			printf("%d ", cnt);
//		}
//	}
//
//	return 0;
//




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
