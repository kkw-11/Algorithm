////39. �� �迭 ��ġ��
//#include<stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n1, n2, num1[100], num2[100], num3[200];
//
//	//ù ��° �迭 �Է�
//	scanf("%d", &n1);
//	for (int i = 0; i < n1; ++i) {
//		scanf("%d", &num1[i]);
//	}
//
//	//�� ��° �迭 �Է� �ޱ�
//	scanf("%d", &n2);
//	for (int i = 0; i < n2; ++i) {
//		scanf("%d", &num2[i]);
//	}
//
//	//�� �迭 �����ϸ� ����
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
//	//����ϱ�
//	for (int i = 0; i < n1 + n2; ++i) {
//		printf("%d ", num3[i]);
//	}
//
//
//	return 0;
//}
//
////39. �� �迭 ��ġ��
//#include<stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n1, n2, num1[100], num2[100], num3[200];
//	
//	//ù ��° �迭 �Է�
//	scanf("%d", &n1);
//	for (int i = 0; i < n1; ++i) {
//		scanf("%d", &num1[i]);
//	}
//
//	//�� ��° �迭 �Է� �ޱ�
//	scanf("%d", &n2);
//	for (int i = 0; i < n2; ++i) {
//		scanf("%d", &num2[i]);
//	}
//	//�� �迭 �����ϸ� ����
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
//	//����ϱ�
//	for (int i = 0; i < n1 + n2; ++i) {
//		printf("%d ", num3[i]);
//	}
//
//
//	return 0;
//}
//
//////39. �� �迭 ��ġ��
////#include<stdio.h>
////int main() {
////	int n,n2, num[200];
////	scanf("%d", &n);
////	//ù ��° �迭 �Է�
////	for (int i = 0; i < n; ++i) {
////		scanf("%d", &num[i]);
////	}
////
////	scanf("%d", &n2);
////	//�� ��° �迭 ù �迭���� �ε������� �Է¹ޱ�
////	for (int i = n; i < n + n2; ++i) {
////		scanf("%d", &num[i]);
////	}
////	//�������ķ� �迭 �����ϱ�
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
//////36. ��������
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
//////34 ��������
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
//////34 ��������
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
//////34 ��������
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

////32. 3�� ������?
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
//	//�������� ����
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
//	//�ߺ� �� ���� �Ҷ� 3�� ���ϱ�
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

////32 ��������
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
//		//�ּҰ� ã��
//		minIdx = i;
//		for (int j = i + 1; j < n; ++j) {
//			if (num[minIdx] > num[j])
//				minIdx = j;
//		}
//		//�ּҰ� ��ȯ
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

////12.������ �� ����(large)
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//
//	int d = 9, lastdigitmax = 0,i = 1;
//	int n, res = 0;
//	scanf("%d", &n);
//
//	//�ڸ��� üũ ( �����ڸ��ִ�� + �ش��ڸ����� ����)= �ش��ڸ� �ִ��
//	//ex) 3�ڸ��� üũ(�����ڸ� �ִ�� 9 + �ش��ڸ� ���ڰ��� 90 = 99)
//	while (lastdigitmax + d < n) {
//		res = res + i * d;//���� �ڸ����� ����Ѽ��� ����
//		++i;//���� ���ڸ� ���� üũ
//		lastdigitmax = lastdigitmax + d;
//		d = d * 10;
//	}
//
//	printf("%d", res + i*(n - lastdigitmax));
//	return 0;
//}


////12.������ �� ����(large)
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



////11.������ �� ����
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
//		//�� ���ڰ� ���ڸ����� ī���� ����
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


////11.������ �� ����
//#include <stdio.h>
//
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int num, cnt = -1, res = 0;
//	scanf("%d", &num);
//	int digit = num;
//
//	//�ڸ��� ���ϱ�
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


////10.�ڸ����� ��
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
//		//���ڸ��� �ձ��ϱ�
//		res = digit_sum(num);
//
//		//�� �ڸ��� �� �ִ밪 ��
//		if (max < res) {
//			max = res;
//			summaxnum = num; //�� �ڸ� �� max �Ǵ� ���� ���
//		}
//		else if (max == res) {//�ڸ��� ���� max���� ���� �Ǵ� ���ڰ� ���� ��� ������ �����ص� summaxnum�� ���� num�� ���ؼ� ū���� ���
//			if (num > summaxnum)
//				summaxnum = num;
//		}
//	}	
//
//	printf("%d", summaxnum);
//	return 0;
//}

////10.�ڸ����� ��
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
//		//���ڸ��� �ձ��ϱ�
//		pres[i] = digit_sum(pnum[i]);
//
//		//�� �ڸ��� �� �ִ밪 ��
//		if (max <= pres[i]) {
//			max = pres[i];
//			summaxnum = pnum[i];
//		}
//
//	}
//
//	//max���� �ش��ϴ� ������ �ִ밪 ���ϱ�
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

////9. ����� ���
//#include <stdio.h>
//int cnt[500001]; // ���������� �ڵ� 0���� �ʱ�ȭ��
//
//int main() {
//
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; ++i) {//1~n ���� �ݺ� ����
//		//����� ���� ����� ���ϱ� (i~n ���� i�� ����� 1�� ���ϱ�)
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

////9. ����� ���
//#include <stdio.h>
//int main() {
//
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; ++i) {
//		int cnt = 0;
//		int quotient = i;
//
//		//��� ���� ���ϱ�
//		if (i == 1)//1�� ��� ���� ������ 1 // else �������� �ݺ��� �����ϸ� 0 �� ��µ�
//			printf("%d ", 1);
//		else {//2���� ��� ���� ���ϱ� �ݺ��� Ƚ�� ���̱� ���ؼ� ������ ���� 1���� n ���� �������� �� �������� 
//			for (int j = 1; j < quotient; ++j) {
//				if (i % j == 0) {
//					quotient = i / j;
//					if (j == quotient)  
//						cnt += 1; // �������� ��� ��� ���� 1�� ����
//					else
//						cnt += 2; // ���� ���� �ƴ� �̻� ����� ���� 2���� ����
//				}
//			}
//
//			printf("%d ", cnt);
//		}
//	}
//
//	return 0;
//




////55.��������(stack)
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


////32. 3�� ������?
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
//	//�������� ����
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
//	//�ߺ� �� ���� �Ҷ� 3�� ���ϱ�
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
//
//////55.��������(stack)
////#include <stdio.h>
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


//55.�ùٸ���ȣ (STL stack)
//#include <stdio.h>
//#include <stack>
//using namespace std;
//
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	stack<char> s;
//	int flag = 0; //���� ����
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


////53. K���� ���
////����Ǯ��
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

////53. K���� ���
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