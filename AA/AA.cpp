//50. ����(territory) ���� : (small)
#include <stdio.h>
int main() {
	//freopen("input.txt", "rt", stdin);
	int map[50][50];
	int H, W, HH, HW, area=0, maxArea = 0;

	scanf("%d %d", &H, &W);
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			scanf("%d", &map[i][j]);
		}
	}

	scanf("%d %d", &HH, &HW);


	//i,j�� �����ؼ� ���� �� ������ġ ���� �ǹ�
	for (int i = 0; i <= H - HH; ++i) {
		for (int j = 0; j <= W - HW; ++j) {
			area = 0;

			//���δ� ��ȸ, ���δ� ��ȸ������ �� ����
			for (int k = 0; k < HH; ++k) {
				for (int l = 0; l < HW; ++l) {
					area += map[i + k][j + l];
				}
			}
			if (maxArea < area) {
				maxArea = area;

			}

		}
	}

	printf("%d", maxArea);

	return 0;
}




////48. �� ���� ��հ� ���� ����� ��
//#include <stdio.h>
//#include <algorithm>
//#include <math.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int num[9][9];
//	int avg, sum, cursub, minsub, minsubnum;
//
//	for (int i = 0; i < 9; ++i) {
//		sum = avg = 0;
//		int j;
//		for (j = 0; j < 9; ++j) {
//			scanf("%d", &num[i][j]);
//			sum += num[i][j];
//		}
//		//����/�Ǽ� => �Ǽ�
//		avg = sum / (double)j + 0.5;
//		minsubnum = num[i][0];
//		minsub = abs(avg - num[i][0]); //abs ���밪 �Լ�(algoritm ������Ͽ� ����)
//		for (int k = 0; k < 9; ++k) {
//			cursub = abs(avg - num[i][k]);
//			if (minsub > cursub) {
//				minsub = cursub;
//				minsubnum = num[i][k];
//			}
//			else if (minsub == cursub) {
//				if (minsubnum < num[i][k])
//					minsubnum = num[i][k];
//
//			}
//		}
//		printf("%d %d\n", avg, minsubnum);
//	}
//
//
//	return 0;
//}
//
////48. �� ���� ��հ� ���� ����� ��
//#include <stdio.h>
//#include <math.h>
//int main() {
//	freopen("input.txt", "rt", stdin);
//	int num[9][9];
//	int avg[9];
//	int sum,cursub, minsub, minsubnum;
//
//	for (int i = 0; i < 9; ++i) {
//		sum = avg[i] = 0;
//		int j;
//		for (j = 0; j < 9; ++j) {
//			scanf("%d", &num[i][j]);
//			sum += num[i][j];
//		}
//		//����/�Ǽ� => �Ǽ�
//		avg[i] = sum /(double)j + 0.5;
//		//avg[i] = round((double)sum / (double)j);
////		printf("sum: %d, avg:%d\n", sum,avg[i]);
//	}
//
//	for (int i = 0; i < 9; ++i) {
//		minsubnum = num[i][0];
//		minsub = avg[i] - num[i][0];
//		if (minsub < 0) minsub = -minsub;
//
//
//		for (int j = 0; j < 9; ++j) {
//			cursub = avg[i] - num[i][j];
//			if (cursub < 0) cursub = -cursub;
//
//			if (minsub > cursub) {
//				minsub = cursub;
//				minsubnum = num[i][j];
//			}
//			else if (minsub == cursub) {
//				if (minsubnum < num[i][j])
//					minsubnum = num[i][j];
//			}
//
//		}
//		printf("%d %d\n", avg[i], minsubnum);
//	}
//
//
//	return 0;
//}

////47.���츮(2���� �迭 Ž��)
//#include<stdio.h>
////���� ������ �����ϸ� �ڵ����� �ʱⰪ 0 
//int map[52][52];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { -1,1,0,0 };
//int main() {
//	//freopen("input.txt", "rt", stdin);
//
//	int n;
//	int cnt = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= n; ++j) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= n; ++j) {
//			int flag = 0;
//			for (int k = 0; k < 4; ++k) {
//				//�߽��� ��� �����¿� �� ���̶� ū �� ������ �˻� ���� �� üũ
//				if (map[i][j] <= map[i + dx[k]][j + dy[k]]) {
//					flag = 1;
//					break;
//				}
//			}
//			//üũ���� ������ ī��Ʈ�� ����
//			if (flag == 0)
//				++cnt;
//		}
//	}
//
//	printf("%d", cnt);
//
//
//	return 0;
//}
//
//////47.���츮(2���� �迭 Ž��)
//#include<stdio.h>
////���� ������ �����ϸ� �ڵ����� �ʱⰪ 0 
//int map[52][52];
//int main() {
//	//freopen("input.txt", "rt", stdin);
//
//	int n;
//	int cnt = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= n; ++j) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= n; ++j) {
//			if ((map[i][j] > map[i - 1][j]) && (map[i][j] > map[i + 1][j]) && (map[i][j] > map[i][j - 1]) && (map[i][j] > map[i][j + 1]))
//				++cnt;
//		}
//	}
//
//	printf("%d", cnt);
//
//
//	return 0;
//}

////41.���ӵ� �ڿ����� ��
//#include<stdio.h>
//int main() {
//	int N, sum = 1, cnt = 0,mod,quenti;
//	scanf("%d", &N);
//
//	//i�� ���ӵ� ������ ������ �ǹ�
//	//i�� 2��� ���ӵ� ���ڰ� 2����� ��
//	for (int i = 2; i < N; ++i) {
//		sum += i;
//		//������ ���� N�� �� ���� 1���� 0�� �ϳ��� �й����־��ٰ� �����ϸ�ǰ�
//		//������ ���� N ���Ѿ ���� �ڿ����� ������ �� ���� N�� �� �� ����.
//		if (sum > N) break;// 1���� ���ӵ� ������ ���� �̹� �־��� ���� �Ǿ��ٸ� ���� ������ ���ڸ� ���Ѱ��� ���� ����� ���� ����
//		mod = N - sum;
//		if (mod % i == 0) {
//			++cnt;
//			quenti = mod / i;
//			int j;
//			for (j = 1; j < i; ++j) {
//				printf("%d + ", quenti + j);
//			}
//			printf("%d = %d\n", quenti + j, N);
//		}
//
//	}
//
//	printf("%d", cnt);
//
//	return 0;
//}


////41.���ӵ� �ڿ����� ��
//#include<stdio.h>
//void seqPrint(int left, int right) {
//	for (int k = left; k < right; ++k) {
//		printf("%d + ", k);
//	}
//	printf("%d = ", right);
//}
//int main() {
//	int N, sum = 0, cnt = 0;
//	scanf("%d", &N);
//
//	//N-1���� ���ӵ� �ڿ����� ���ؼ� N�� �Ǵ� ���� ã�´�.
//	//ã���� �� ī��Ʈ ������ ������Ű��
//	//���ӵ� �ڿ��� ������ ��½�Ų��.
//	for (int i = N - 1; i >= 1; --i) {
//		sum = 0;
//		for (int j = i; j >= 1; --j) {
//			sum += j;
//			if (sum == N) {
//				++cnt;
//
//				seqPrint(j, i);
//				printf("%d\n", N);
//
//			}
//			else if (sum > N) break;
//		}
//	}
//
//	printf("%d", cnt);
//
//	return 0;
//}

////41.���ӵ� �ڿ����� ��
//#include<stdio.h>
//int main() {
//	int N, sum = 0, cnt = 0;
//	scanf("%d", &N);
//
//	//N-1���� ���ӵ� �ڿ����� ���ؼ� N�� �Ǵ� ���� ã�´�.
//	//ã���� �� ī��Ʈ ������ ������Ű��
//	//���ӵ� �ڿ��� ������ ��½�Ų��.
//	for (int i = N - 1; i >= 1; --i) {
//		sum = 0;
//		for (int j = i; j >= 1; --j) {
//			sum += j;
//			if (sum == N) {
//				++cnt;
//
//				for (int k = j; k < i; ++k) {
//					printf("%d + ", k);
//				}
//				printf("%d = %d\n", i, N);
//			}
//
//			else if (sum > N) break;
//		}
//	}
//
//	printf("%d", cnt);
//
//	return 0;
//}

////40.������(�������� �˰���)
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	//	freopen("input.txt", "rt", stdin);
//	int n, m;
//	scanf("%d", &n);
//	vector<int> a(n);
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &a[i]);
//	}
//	sort(a.begin(), a.end());
//
//	scanf("%d", &m);
//	vector<int> b(m);
//	for (int i = 0; i < m; ++i) {
//		scanf("%d", &b[i]);
//	}
//	sort(b.begin(), b.end());
//
//	int i = 0, j = 0, k =0;
//	while (i < n && j < m) {
//		if (a[i] < b[j])
//			++i;
//		else if (a[i] > b[j])
//			++j;
//		else {
//			printf("%d ", a[i]);
//			++i;
//			++j;
//		}
//	}
//
//	return 0;
//}

//
////40.������(�������� �˰���)
//#include <stdio.h>
//#include <stdlib.h>
//void swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void sort(int arr[], int size) {
//	for (int i = size; i > 1; --i) {
//		int j;
//		for (j = 0; j < i - 1; ++j) {
//			if (arr[j] > arr[j + 1]) {
//				swap(&arr[j], &arr[j + 1]);
//			}
//		}
//	}
//}
//
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n, m;
//	int* a, *b;
//	scanf("%d", &n);
//	a = (int*)malloc(sizeof(int) * n);
//
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &a[i]);
//	}
//	sort(a, n);
//
//	scanf("%d", &m);
//
//	b = (int*)malloc(sizeof(int) * m);
//	for (int i = 0; i < m; ++i) {
//		scanf("%d", &b[i]);
//	}
//
//	sort(b, m);
//
//	int i = 0, j = 0;
//	while (i < n && j < m) {
//		if (a[i] < b[j])
//			++i;
//		else if (a[i] > b[j])
//			++j;
//		else {
//			printf("%d ", a[i]);
//			++i;
//			++j;
//		}
//	}
//
//	return 0;
//}
////40.������(�������� �˰���)
//#include <stdio.h>
//void swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void sort(int arr[], int size) {
//	for (int i = size; i > 1; --i) {
//		int j;
//		for (j = 0; j < i - 1; ++j) {
//			if (arr[j] > arr[j + 1]) {
//				swap(&arr[j], &arr[j + 1]);
//			}
//		}
//	}
//}
//int main() {
////	freopen("input.txt", "rt", stdin);
//	int n, m;
//	int a[30000], b[30000];
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &a[i]);
//	}
//	sort(a, n);
//
//	scanf("%d", &m);
//
//	for (int i = 0; i < m; ++i) {
//		scanf("%d", &b[i]);
//	}
//
//	sort(b, m);
//
//	int i = 0, j = 0;
//	while (i < n && j < m) {
//		if (a[i] < b[j])
//			++i;
//		else if (a[i] > b[j])
//			++j;
//		else {
//			printf("%d ", a[i]);
//			++i;
//			++j;
//		}
//	}
//
//	return 0;
//}


////40.������(�������� �˰���)
//#include <stdio.h>
//void swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void sort(int arr[], int size) {
//	for (int i = size; i > 1; --i) {
//		int j;
//		for (j = 0; j < i - 1; ++j) {
//			if (arr[j] > arr[j + 1]) {
//				swap(&arr[j], &arr[j + 1]);
//			}
//		}
//	}
//}
//int main() {
//	int n, m;
//	int a[30000], b, c[30000];
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &m);
//
//	//b�� �����鼭 a�� �ߺ��� ã��
//	int k = 0;
//	for (int i = 0; i < m; ++i) {
//		scanf("%d", &b);
//		for (int j = 0; j < n; ++j) {
//			if (b == a[j]) {
//				c[k++] = b;
//				break;
//			}
//
//		}
//	}
//
//	//c �������� �����ϸ鼭 ���
//	for (int i = k; i > 1; --i) {
//		int j;
//		for (j = 0; j < i - 1; ++j) {
//			if (c[j] < c[j + 1]) {
//				swap(&c[j], &c[j + 1]);
//			}
//		}
//		printf("%d ", c[j]);
//	}
//	printf("%d", c[0]);
//
//	/*for (int i = 0; i < k; ++i) {
//		printf("%d ", c[i]);
//	}*/
//
//
//	return 0;
//}

//
////40.������(�������� �˰���)
//#include <stdio.h>
//void swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main() {
//	int n, m;
//	int a[30000], b, c[30000];
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &m);
//
//	//b�� �����鼭 a�� �ߺ��� ã��
//	int k = 0;
//	for (int i = 0; i < m; ++i) {
//		scanf("%d", &b);
//		for (int j = 0; j < n; ++j) {
//			if (b == a[j]){
//				c[k++] = b;
//				break;
//			}
//
//		}
//	}
//
//	//c �������� �����ϸ鼭 ���
//	for (int i = k; i > 1; --i) {
//		int j;
//		for (j = 0; j < i - 1; ++j) {
//			if (c[j] <	c[j + 1]) {
//				swap(&c[j], &c[j + 1]);
//			}
//		}
//		printf("%d ", c[j]);
//	}
//	printf("%d", c[0]);
//
//	/*for (int i = 0; i < k; ++i) {
//		printf("%d ", c[i]);
//	}*/
//
//
//	return 0;
//}
//

////39. �� �迭 ��ġ��
//#include<stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int N, M;
//	int a[100] = { 0 }, b[100] = { 0 }, c[200];
//	scanf("%d", &N);
//
//	for (int i = 0; i < N; ++i) {
//		scanf("%d", &a[i]);
//	}
//
//	scanf("%d", &M);
//
//	for (int i = 0; i < M; ++i) {
//		scanf("%d", &b[i]);
//	}
//
//	int i = 0, j = 0, k = 0;
//
//	while (i < N && j < M) {
//
//		if (a[i] <= b[j])
//			c[k++] = a[i++];
//		else
//			c[k++] = b[j++];
//
//	}
//	//i>=N Or j>=M �̸� ���� ���ǹ��� ����������.
//	//�̶� j<M�̸� b�迭�� ���� ���� c�� �ְ�
//	//j<N�̸� a�迭�� ���� ���� c�� �ִ´�.
//
//	//while���� ������� 2�� ���������� �ΰ��� while���� ��� ������� �ʴ´�.
//	while (i >= N && j < M) {
//		c[k++] = b[j++];
//	}
//
//	while (i < N && j >= M) {
//		c[k++] = a[i++];
//	}
//	for (int i = 0; i < N + M; ++i) {
//		printf("%d ",c[i]);
//	}
//
//}


////31. źȭ���� ���� 
//// �ڵ����(by ������)
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	char ch[100];
//	int summass = 0, sumc = 0, sumh = 0, carbon = 0, hydrogen = 0;
//	scanf("%s", ch);
//	int i, pos;
//
//	//pos�� H�� ��ġ ǥ��
//	if (ch[1] == 'H') {
//		sumc = 1;
//		pos = 1;
//	}
//	else {
//		//H�� ���� ������ ź���� ���� ����
//		for (i = 1; ch[i] != 'H'; ++i) {
//			sumc = sumc * 10 + (ch[i] - 48);
//		}
//		pos = i;
//	}
//
//	//H ���� ���� ���� ������ ���� ����
//	//�̶� H������ 1�� ���� ���ܷ� ���� �����ش�.
//	if (ch[pos + 1] == '\0')
//		sumh = 1;
//	else {
//		for (i = pos + 1; ch[i] != '\0'; ++i) {
//			sumh = sumh * 10 + (ch[i] - 48);
//		}
//	}
//
//
//	summass = sumc * 12 + sumh;
//
//	printf("%d", summass);
//	return 0;
//}


////31. źȭ���� ����
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	char ch[100];
//	int summass = 0, sumc = 0, sumh = 0, carbon = 0, hydrogen = 0;
//	scanf("%s", ch);
//	int i, j;
//
//	//i�� H�� ��ġ ǥ��
//	if (ch[1] == 'H') {
//		i = 1;
//		sumc = 1;
//	}
//	else {
//		//H�� ���� ������ ź���� ���� ����
//		for (i = 1; ch[i] != 'H'; ++i) {
//			carbon = ch[i] - 48;
//			sumc = sumc * 10 + carbon;
//		}
//	}
//
//	//H ���� ���� ���� ������ ���� ����
//	//�̶� H������ 1�� ���� ���ܷ� ���� �����ش�.
//	if (ch[i + 1] == '\0')
//		sumh = 1;
//	else {
//		for (j = i + 1; ch[j] != '\0'; ++j) {
//			hydrogen = ch[j] - 48;
//			sumh = sumh * 10 + hydrogen;
//		}
//	}
//
//
//
//	summass = sumc * 12 + sumh;
//
//	printf("%d", summass);
//	return 0;
//}

////30. 3�� ������?(large)
//#include <stdio.h>
//int main() {
//	freopen("input.txt", "rt", stdin);
//	int n, cntThree = 0, cntTotal = 0, digit = 0, i, temp = 1, digitStartnum;
//	scanf("%d", &n);
//	temp = n;
//	//�ڸ��� ���ϱ�
//	while (temp > 0) {
//		++digit;
//		temp /= 10;
//	}
//
//	digitStartnum = 1;
//	if (n >= 10) {
//		//���� �ڸ��� �Ʒ������� ��Ģ��� 3 ���ϱ�
//		for (i = 1; i < digit; ++i) {
//			if (i < 3) {
//				cntThree = cntThree * 9 + digitStartnum;
//				cntTotal += cntThree;
//				digitStartnum *= 10;
//			}
//			else {
//				cntThree = 2 * (digitStartnum / 10);
//				cntThree = cntThree * 9 + digitStartnum;
//				cntTotal += cntThree;
//				digitStartnum *= 10;
//			}
//		}
//
//		for (i = digitStartnum; i <= n; ++i) {
//			temp = i;
//			while (temp > 0) {
//				if (temp % 10 == 3) {
//					++cntTotal;
//				}
//				temp /= 10;
//			}
//		}
//	}
//	else if (n < 10 && n >= 3) {
//		cntTotal = 1;
//	}
//
//
//
//
//	printf("%d", cntTotal);
//
//	return 0;
//}

//
////29.3�� ������?(small)
//#include <stdio.h>
//int main() {
//	freopen("input.txt", "rt", stdin);
//	int n, temp, cnt = 0;
//	scanf("%d", &n);
//	int temp2 = 10;
//
//	for (int i = 1; i <= n; ++i) {
//		temp = i;
//		while (temp > 0) {
//			if (temp % 10 == 3) {
//				++cnt;
//			}
//
//			temp /= 10;
//		}
//		if (i == temp2) {
//			printf("number:%d->%d\n", i, cnt);
//			temp2 *= 10;
//		}
//		/*if (i <= 10000) {
//			if (i == temp2) {
//				printf("number:%d->%d\n", i, cnt);
//				temp2 *= 10;
//			}
//		}
//		else {
//			if(i % 10000 ==0)
//				printf("number:%d->%d\n", i, cnt);
//
//		}*/
//
//	}
//	printf("%d", cnt);
//	return 0;
//
//
//}



////29.3�� ������?(small)
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n, temp, cnt = 0;
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; ++i) {
//		temp = i;
//		while (temp != 0) {
//			if (temp % 10 == 3) {
//				++cnt;
//			}
//			temp /= 10;
//		}
//
//	}
//	printf("%d", cnt);
//	////�ڸ��� ���ϱ�
//	//while (temp != 0) {
//	//	temp /= 10;
//	//	++digit;
//	//}
//
//	return 0;
//
//}
//


////28. N!���� 0�� ����
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n, temp, cnt1 = 0, cnt2 = 0;
//	scanf("%d", &n);
//
//	//2���� n���� �Ҽ���� ��� ������ ����
//	for (int i = 2; i <= n; ++i) {
//		temp = i;
//		//i�� �����Ҷ����� ������ �� 2�� �ʱ�ȭ�ؼ� �ٽ� ������
//		//2�� ��� ������ ���� ���� ��
//		int j = 2;
//		while (temp != 1) {
//			if (temp % j == 0) {
//				if (j == 2) ++cnt1;
//				if (j == 5) ++cnt2;
//				temp /= j;
//			}
//			else
//				++j;
//		}
//	}
//	if (cnt1 < cnt2)
//		printf("%d", cnt1);
//	else
//		printf("%d", cnt2);
//
//
//}

////28. N!���� 0�� ����
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n, cnt = 0, temp;
//	scanf("%d", &n);
//	int* p = (int*)calloc(n + 1, sizeof(int));
//
//	//2���� n���� �Ҽ���� ��� ������ ����
//	for (int i = 2; i <= n; ++i) {
//		temp = i;
//		//i�� �����Ҷ����� ������ �� 2�� �ʱ�ȭ�ؼ� �ٽ� ������
//		//2�� ��� ������ ���� ���� ��
//		int j = 2;
//		while (temp != 1) {
//			if (temp % j == 0) {
//				++p[j];
//				temp /= j;
//			}
//			else
//				++j;
//		}
//	}
//
//	/*for (int i = 0; i <= n; ++i) {
//		printf("p[%d]:%d\n", i, p[i]);
//	}*/
//	//10�� ����̸� 5�� 2�� ���μ��� �����ؾ���
//	//5�� 2�� �ִٸ� cnt�����ϰ� �ݺ��ϱ� ���� ���ҽ�Ŵ
//	while (p[5] > 0 && p[2] > 0) {
//		++cnt;
//		--p[5];
//		--p[2];
//	}
//
//	printf("%d", cnt);
//
//}

//////27. N!�� ǥ����
//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int n, temp;
//	scanf("%d", &n);
//	int* p = (int*)calloc(n + 1, sizeof(int));
//
//	for (int i = 2; i <= n; ++i) {
//		temp = i;
//		int j = 2;
//
//		while (j <= n && temp != 1) {
//			if (temp % j == 0) {
//				++p[j];
//				temp /= j;
//			}
//			else
//				++j;
//		}
//	}
//
//	printf("%d! = ", n);
//	
//	for (int i = 2; i <= n; ++i) {
//		if (p[i] != 0) {
//			printf("%d ", p[i]);
//
//		}
//	}
//	free(p);
//
//	return 0;
//}

////27. N!�� ǥ����
//#include <stdio.h>
//#include <stdlib.h>
//int Factorial(int x) {
//	if (x == 1) return 1;
//
//	return x * Factorial(x - 1);
//}
//bool Primenumber(int x) {
//	int i = 2;
//	for (i = 2; i < x/2; ++i) {
//		if (x % i == 0)break;
//	}
//	if (i == x) return 1;
//	else return 0;
//}
//
//int main() {
//	int n;
//	int num;
//	int game = 1;
//	int prime[1001] = { -1,-1,0 };
//	for (int i = 2; i < 1001; ++i) {
//		if (Primenumber(i)) prime[i] = 0;
//		else prime[i] = -1;
//	}
//
//
//	//���� �Է�
//	scanf("%d", &n);
//
//	//�Էµ� �� ���丮�� ���ϱ�
//	num = Factorial(n);
//
//	//���丮����  �Ҽ����� ������ ���鼭 ������ �������� �ش� �Ҽ� ī��Ʈ ������ŰŰ
//	for (int i = 2; i <= n; ++i) {
//		if (Primenumber(i))
//			while (!(num % i)) {
//				++prime[i];
//				num /= i;
//			}
//	}
//
//	/*for (int i = 0; i <= n; ++i) {
//		printf("prime[%d]:%d\n", i, prime[i]);
//	}*/
//
//
//	//�Ҽ����� � �ʿ����� ����ϱ�
//
//	printf("%d! = ", n);
//	for (int i = 2; i <= n; ++i) {
//		if (prime[i] != -1) {
//			printf("%d ", prime[i]);
//		}
//	}
//}

////26. ������
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int* p = (int*)malloc(sizeof(int) * n);
//	int cnt = 0;
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &p[i]);
//	}
//
//	for (int i = 0; i < n; ++i) {
//		cnt = 1;
//		for (int j = 0; j < i; ++j) {
//			if (p[i] <= p[j])
//				++cnt;
//		}
//		printf("%d ", cnt);
//	}
//
//	free(p);
//}


////25. ���� ���ϱ�
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n, cnt = 0;
//	scanf("%d", &n);
//	int* p1 = (int*)malloc(sizeof(int) * n);
//	int* p2 = (int*)malloc(sizeof(int) * n);
//
//	//�����迭��, ���ǥ�� �迭�� �Է�
//	//���ǥ�� �迭�� �ʱⰪ 1�� ����
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &p1[i]);
//		p2[i] = 1;
//	}
//
//
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			if (p1[i] < p1[j])
//				++p2[i];
//		}
//	}
//
//	for (int i = 0; i < n; ++i) {
//		printf("%d ",p2[i]);
//	}
//	free(p1);
//	free(p2);
//
//	return 0;
//}
//
////25. ���� ���ϱ�
//#include <stdio.h>
//#include <stdlib.h>
//void Swap(int* pa, int* pb) {
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void Print(int list[], int size) {
//	for (int i = 0; i < size; ++i) {
//		printf("%5d", list[i]);
//	}
//	printf("\n");
//}
//void _Sort(int list[], int left, int right) {
//
//	if (left <= right) {
//		int pivot = left;
//		int i = left + 1;
//		int j = right;
//
//		do {
//			while (list[pivot] > list[i])
//				++i;
//			while (list[pivot] < list[j])
//				--j;
//
//			if (i <= j) {
//				Swap(&list[i], &list[j]);
//				++i;
//				--j;
//			}
//			Print(list, 5);
//		} while (i <= j);
//
//		Swap(&list[pivot], &list[j]);
//		Print(list, 5);
//
//		_Sort(list, left, j - 1);
//		_Sort(list, j + 1, right);
//
//	}
//
//}
//void Sort(int list[], int size) {
//	_Sort(list, 0, size - 1);
//}
//
//
//int main() {
//	freopen("input.txt", "rt", stdin);
//	int n, cnt = 0;
//	scanf("%d", &n);
//	int* p1 = (int*)malloc(sizeof(int) * n);
//	int* p2 = (int*)malloc(sizeof(int) * n);
//
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &p1[i]);
//		p2[i] = p1[i];
//	}
//	Print(p1, 5);
//	
//	//����
//	Sort(p2, n);
//
//
//	//p1 ù �ε������� ���ĵ� p2�� ���� ã�Ƽ� ��� ���
//	for (int i = 0; i < n; ++i) {
//		cnt = 1;
//		for (int j = n - 1; j >= 0; --j) {
//			if (p1[i] == p2[j]) {
//				printf("%d ", cnt);
//				break;
//			}
//			++cnt;
//		}
//	}
//	free(p1);
//	free(p2);
//
//	return 0;
//}
//

////24. Jolly Jumpers
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n, pre, now, sub, flag = 0;
//	int subarray[100] = { 0 };
//	int j;
//
//	scanf("%d", &n);
//	scanf("%d", &pre);
//
//	for (int i = 1; i < n; ++i) {
//		scanf("%d", &now);
//		sub = now - pre;
//		if (sub < 0)
//			sub = -sub;
//
//		if (sub > 0 && sub < n && subarray[sub] == 0)
//			subarray[sub] = sub;
//		else {
//			printf("NO\n");
//			return 0;
//		}
//	
//		
//		pre = now;
//	}
//
//	printf("YES\n");
//
//	return 0;
//
//}

////24. Jolly Jumpers
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n, pre, now, sub, flag = 0;
//	int subarray[100] = { 0 };
//	int j;
//
//	scanf("%d", &n);
//	scanf("%d", &pre);
//
//	for (int i = 1; i < n; ++i) {
//		scanf("%d", &now);
//		sub = now - pre;
//		if (sub < 0)
//			sub = -sub;
//
//		if (sub >= n||subarray[sub] != 0) {
//			flag = 1;
//			break;
//		}
//		if (subarray[sub] == 0) {
//				subarray[sub] = sub;
//		}
//		
//		pre = now;
//	}
//	if (flag == 0)
//		printf("YES\n");
//
//	else
//		printf("NO\n");
//
//	return 0;
//
//}
//
////24. Jolly Jumpers
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n, pre, now, sub;
//	int subarray[100] = { 0 };
//	int j;
//
//	scanf("%d", &n);
//	scanf("%d", &pre);
//
//	for (int i = 1; i < n; ++i) {
//		scanf("%d", &now);
//		sub = now - pre;
//		if (sub < 0) {
//			sub = -sub;
//			subarray[sub] = sub;
//		}
//		else
//			subarray[sub] = sub;
//
//		pre = now;
//	}
//
//	for (j = 1; j < n; j) {
//		if (subarray[j] == 0)
//			break;
//	}
//
//	if (j == n)
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//
//	return 0;
//}
//


////23. ���� �κ� ��������
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	freopen("input.txt", "rt", stdin);
//	int n, cnt = 1, max = cnt, pre, now;
//	scanf("%d", &n);
//
//	scanf("%d", &pre);
//
//	for (int i = 1; i < n; ++i) {
//		scanf("%d", &now);
//		if (pre <= now) {
//			++cnt;
//			if (cnt > max)
//				max = cnt;
//		}
//		else
//			cnt = 1;
//		pre = now;
//	}
//
//	printf("%d", max);
//	return 0;
//}


////23. ���� �κ� ��������
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	freopen("input.txt", "rt", stdin);
//	int n, cnt = 1, max = cnt, pre, now;
//	scanf("%d", &n);
//	int* p = (int*)malloc(sizeof(int) * n);
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &p[i]);
//	}
//	pre = p[0];
//	for (int i = 1; i < n; ++i) {
//		now = p[i];
//		if (pre <= now) {
//			++cnt;
//			if (max <= cnt)
//				max = cnt;
//		}
//		else {
//			cnt = 1;
//		}
//		pre = now;
//	}
//
//	printf("%d", max);
//	return 0;
//}

////23. ���� �κ� ��������
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n, cnt = 1, max = cnt;
//	scanf("%d", &n);
//	int* p = (int*)malloc(sizeof(int) * n);
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &p[i]);
//	}
//
//	for (int i = 0; i < n-1; ++i) {
//		if (p[i] <= p[i + 1]) {
//			++cnt;
//			if (max <= cnt)
//				max = cnt;
//		}
//		else {
//			cnt = 1;
//		}
//	}
//
//	printf("%d", max);
//	return 0;
//}

////22. �µ��� �ִ밪
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
////	freopen("input.txt", "rt", stdin);
//
//	int N, K;
//	int sum = 0, max = -21400000;
//	scanf("%d %d", &N, &K);
//
//	int* p =(int*)malloc(sizeof(int) * N);
//	for (int i = 0; i < N; ++i) {
//		scanf("%d", &p[i]);
//		//�µ��� �Է� �����鼭 ù��° ������ �� ���� ���ϱ�
//		if (i < K)
//			sum += p[i];
//	}
//
//	max = sum;
//	//i�� �������� ���� �������� �����ؼ� �ʱⰪ ����
//	for (int i = K; i < N; ++i) {
//		//�������� �ϳ� �߰��� ���� �ϳ����� ���� ������ ���ϱ�
//		sum += (p[i] - p[i-K]);
//		if (sum > max)
//			max = sum;
//	}
//	printf("%d", max);
//	free(p);
//
//	return 0;
//}
//
//
////22. �µ��� �ִ밪
//#include <stdio.h>
//int main() {
////	freopen("input.txt", "rt", stdin);
//
//	int N, K;
//	int temper[100000];
//	int sum = 0, max = -21400000;
//	scanf("%d %d", &N, &K);
//
//	//i�� ������ ���� �������� �����ؼ� �ʱⰪ ����
//
//	for (int i = 0; i < N; ++i) {
//		scanf("%d", &temper[i]);
//		//�µ��� �Է� �����鼭 ù��° ������ �� ���� ���ϱ�
//		if (i < K)
//			sum += temper[i];
//	}
//
//	max = sum;
//	for (int i = 0; i < N - K; ++i) {
//		//�������� �ϳ� �߰��� ���� �ϳ����� ���� ������ ���ϱ�
//		sum += (temper[K + i] - temper[i]);
//		if (sum > max)
//			max = sum;
//	}
//	printf("%d", max);
//
//	return 0;
//}
//
////22. �µ��� �ִ밪
//#include <stdio.h>
//int main() {
//	//	freopen("input.txt", "rt", stdin);
//
//	int N, K;
//	int temper[100000];
//	int sum, max = -21400000;
//	scanf("%d %d", &N, &K);
//
//	for (int i = 0; i < N; ++i) {
//		scanf("%d", &temper[i]);
//	}
//
//	for (int i = 0; i <= N - K; ++i) {
//		sum = 0;
//		//i�Ϻ��� K�ϱ��� �µ��� ���ϱ�
//		for (int j = i; j < K + i; ++j) {
//			sum += temper[j];
//		}
//		if (sum > max)
//			max = sum;
//	}
//
//	printf("%d", max);
//
//	return 0;
//}

////21. ī�� ����
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int cardA[10], cardB[10], res[10];
//	int scoreA = 0, scoreB = 0;
//	int lw = 0;
//	for (int i = 0; i < 10; ++i) {
//		scanf("%d", &cardA[i]);
//	}
//	for (int i = 0; i < 10; ++i) {
//		scanf("%d", &cardB[i]);
//	}
//
//	for (int i = 0; i < 10; ++i) {
//		if (cardA[i] > cardB[i]) {
//			lw = 'A';
//			scoreA += 3;
//		}
//
//		else if (cardA[i] < cardB[i]) {
//			lw = 'B';
//			scoreB += 3;
//		}
//		else {
//			scoreA += 1;
//			scoreB += 1;
//		}
//	}
//
//	printf("%d %d\n", scoreA, scoreB);
//	if (scoreA == scoreB) {
//		if (lw == 0)
//			printf("D\n");
//		else
//			printf("%c", lw);
//
//	}
//	else if (scoreA > scoreB) printf("A\n");
//	else printf("B\n");
//
//
//	return 0;
//}
//
////21. ī�� ����
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int cardA[10], cardB[10], res[10];
//	int scoreA = 0, scoreB = 0;
//
//	for (int i= 0; i < 10; ++i) {
//		scanf("%d", &cardA[i]);
//	}
//	for (int i = 0; i < 10; ++i) {
//		scanf("%d", &cardB[i]);
//	}
//
//	for (int i = 0; i < 10; ++i) {
//		if (cardA[i] > cardB[i]) {
//			res[i] = 'A';
//			scoreA += 3;
//		}
//		else if (cardA[i] < cardB[i]) {
//			res[i] = 'B';
//			scoreB += 3;
//		}			
//		else {
//			res[i] = 'D';
//			scoreA += 1;
//			scoreB += 1;
//		}
//	}
//
//	printf("%d %d\n", scoreA, scoreB);
//	if (scoreA == scoreB) {
//		int j = 0;
//		for (j = 9; j >= 0; --j) {
//			if (res[j] == 'A' || res[j] == 'B') {
//				printf("%c", res[j]);
//				break;
//			}
//		}
//		if (j == -1)
//			printf("D\n");
//
//	}
//	else if (scoreA > scoreB) printf("A\n");
//	else printf("B\n");
//
//	return 0;
//}

////20. ���� ���� ��
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n;
//	int a[100], b[100];
//	scanf("%d", &n);
//	//a�Է�
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &a[i]);
//	}
//	//b�Է�
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &b[i]);
//	}
//
//	for (int i = 0; i < n; ++i) {
//		//���� ���� �ƴѰ�� ������
//		if (a[i] == b[i]) printf("D\n");
//		//a�� �̱�� ���
//		else if (a[i] == 1 && b[i] == 3)printf("A\n");
//		else if (a[i] == 2 && b[i] == 1)printf("A\n");
//		else if (a[i] == 3 && b[i] == 2)printf("A\n");
//		//�������� B���̱�� ���
//		else printf("B\n");
//	}
//
//	return 0;
//}

////20. ���� ���� ��
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n;
//	int a[100], b[100];
//	scanf("%d", &n);
//	//a�Է�
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &a[i]);
//	}
//	//b�Է�
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &b[i]);
//	}
//
//	for (int i = 0; i < n; ++i) {
//		//���� ���� �ƴѰ�� ������
//		//a�� 1,2,3 �������� ��
//		if (a[i] == b[i]) printf("D\n");
//		else {
//			if (a[i] == 1) {
//				if (b[i] == 2)printf("B\n");
//				if (b[i] == 3)printf("A\n");
//			}
//			else if (a[i] == 2) {
//				if (b[i] == 1)printf("A\n");
//				if (b[i] == 3)printf("B\n");
//			}
//			else {
//				if (b[i] == 1) printf("B\n");
//				if (b[i] == 2)printf("A\n");
//			}
//		}
//
//	}
//
//	return 0;
//}

////20. ���� ���� ��
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n;
//	int a[100], b[100];
//	scanf("%d", &n);
//	//a�Է�
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &a[i]);
//	}
//	//b�Է�
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &b[i]);
//	}
//
//	for (int i = 0; i < n; ++i) {
//		//���� ó�� �������������� ���� ū���� �̱�ٿ��� ������ ������ ���ܰ� �߻� ���ܸ� ���� ����
//		//���� ������ ���� ���� �̱�
//		if ((a[i] == 1 && b[i] == 3) || (a[i] == 3 && b[i] == 1))
//		{
//			if (a[i] < b[i])
//				printf("A\n");
//			else if (a[i] > b[i])
//				printf("B\n");
//
//		}			
//		else{
//		if (a[i] > b[i])
//			printf("A\n");
//		else if (a[i] < b[i])
//			printf("B\n");
//		else
//			printf("D\n");
//		}
//	}
//
//	return 0;
//}

////19. �г�������
//#include<stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//
//	int n;
//	int num[100], peonum = 0, max = 0;
//	scanf("%d", &n);
//
//	//�����鼭 ó���� �ȵǱ� ���� �迭�� ����
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &num[i]);
//	}
//	
//	//������ ������� �˻��ҿ���
//	//ó������ ������ ȥ���̹Ƿ� �������� �ִ밪
//	//������ �˻��ذ��鼭 max���� ū �� ã���� �� ���� �޺κп��� �ִ밪 �� 
//	//���ݱ����� �г�������
//	max = num[n - 1];
//
//	for (int i = n-1; i >= 0; --i) {
//		//
//		if (num[i] > max) {
//			++peonum;
//			max = num[i];
//		}
//	}
//
//	printf("%d",peonum);
//
//	return 0;
//
//}
//
////19. �г�������
//#include<stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	
//	int n;
//	int num[100], peonum = 0, sum=0;
//	scanf("%d", &n);
//	//�����鼭 ó���� �ȵǱ� ���� �迭�� ����
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &num[i]);
//	}
//
//	for (int i = 0; i < n-1; ++i) {
//		peonum = 0;
//		for (int j = i + 1; j < n; ++j) {
//
//			//�����л����� ���� �л��� ī��Ʈ
//			if (num[i] > num[j])
//				peonum += 1;
//		}
//
//		//�� �л����� ��� ���� �л����� ���� ��� �г�������
//		//ù��° �л�: ��к��� n-1�� ������ �г�������
//		//�ι�° �л�: ��к��� n-2�� ������ �г�������
//		if (peonum == n - 1 - i) sum +=1;
//			
//	}
//
//	printf("%d", sum);
//
//	return 0;
//
//}
//
//
////19. �г�������
//#include<stdio.h>
//int main() {
//	freopen("input.txt", "rt", stdin);
//	int n;
//	int num[100], sum = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &num[i]);
//	}
//
//	for (int i = 0; i < n-1; ++i) {
//		int j;
//		for ( j = i + 1; j < n; ++j) {
//			//�����л����� ū �л� �ִٸ� �г������� �ƴ� �˻� ����
//			//���������л� �˻�
//			if (num[i] <= num[j]) {
//				break;
//			}		
//		}
//// ������ ������ ��� �����л����� ���� �� 
////�г������� �Ѹ� �߰�
//		if (j == n)
//			sum += 1;
//	}
//	printf("%d", sum);
//
//	return 0;
//
//}


////18. ��������
//#include<stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	
//	int n, m, maxSc = -1, sc = 0;
//	int num;
//	
//	scanf("%d %d", &n, &m);
//
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &num);
//		
//		//���� ������ ũ�� �� �� ����
//		if (num > m)
//			++sc;
//		else {
//			sc = 0;
//		}
//		//���� �� ������ ���ذ��� ���� �ʾ� sc�� 0���� �ʱ�ȭ �Ǳ��� max���� ����
//		if (maxSc < sc) {
//			maxSc = sc;
//		}
//	}
//
//	//�ѹ��� �︮�� �ʾҴٸ� sc�� ���� ���� �ʰ� sc =0���� maxSc���� ���� �Ǿ�����
//	if (maxSc == 0) printf("%d", -1);
//	else printf("%d", maxSc);
//
//	return 0;
//
//}


////18. ��������
//#include<stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n, m, maxSc = 0, sc = 0;
//	int num[100] = {0};
//	scanf("%d %d", &n, &m);
//
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &num[i]);
//	}
//	
//
//	for (int i = 0; i < n; ++i) {
//		//���� ������ ũ�� �� �� ����
//		if (num[i] > m) 
//			++sc;
//		else {
//			//�ʱ�ȭ ���� sc�� �ִ�sc�� ���ϰ� ����
//			if (maxSc < sc)
//				maxSc = sc;
//			sc = 0;
//		}
//		//else���� sc �ʱ�ȭ ������ max �����ϸ� ������ ���ڱ��� �������� ��� max�� ���� ������ ���� ����
//		if (maxSc < sc)
//			maxSc = sc;
//	}
//
//	printf("%d", maxSc);
//	return 0;
//
//}

//////17.����������
//#include <stdio.h>
//int totalSum(int n) {
//	int sum = 0;
//	for (int i = 1; i <= n; ++i) {
//		sum += i;
//	}
//	return sum;
//}
//
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n, sum = 0, num, ans;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; ++i) {
//		scanf("%d %d", &num, &ans);
//
//		sum = totalSum(num);
//
//		if (sum == ans)printf("YES\n");
//		else printf("NO\n");
//	}
//
//
//	return 0;
//}
//
//////17.����������
//#include <stdio.h>
//#include <stdlib.h>
//int totalSum(int n) {
//	int sum = 0;
//	for (int i = 1; i <= n; ++i) {
//		sum += i;
//	}
//	return sum;
//}
//
//int main() {
////	freopen("input.txt", "rt", stdin);
//	int n, res;
//	scanf("%d", &n);
//	int* p = (int*)malloc(sizeof(int) * 2 * n);
//
//	for (int i = 0; i < 2 * n; ++i) {
//		scanf("%d", &p[i]);
//	}
//
//	for (int i = 0; i < (2 * n - 1); i += 2) {
//		res = totalSum(p[i]);
//		if (p[i + 1] == res) printf("YES\n");
//		else printf("NO\n");
//	}
//
//
//	free(p);
//	return 0;
//}


////16.�Ƴ��׷�
//#include <stdio.h>
//void Swap(char* pa, char* pb) {
//	char temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	char ch1[200], ch2[200];
//	int flag = 0;
//
//	//�����Է¹ޱ�
//	scanf("%s", ch1);
//	scanf("%s", ch2);
//
//	/*
//	ù��° ������ ù��° �ε������� �������ڿ� �ִ��� ���� ������ ��ü
//	ù ��° ������ ���� �ε��� ����
//	�� ��Ȳ �ݺ�
//	�Ź� ���� flag ������ ��ü ��Ȳ üũ
//	��ü�� ���� �����ٸ� ���� ���� ���̻� �����Ƿ� �Ƴ��׷� �ƴ� ������ ����
//	*/
//	for (int i = 0; ch1[i]; ++i) {
//		flag = 0;
//		for (int j = i; ch2[j]; ++j) {
//			if (ch1[i] == ch2[j]) {
//				Swap(&ch2[i], &ch2[j]);
//				flag = 1;
//				break;
//			}
//		}
//		//������ ������ ��ü���� üũ
//		//flag �״�� 0�̸� ������ ���� ��ü ������
//		if (flag == 0)break;
//	}
//
//	if (flag == 0) printf("NO");
//	else printf("YES");
//	
//	return 0;
//}
//
////16.�Ƴ��׷�
//#include <stdio.h>
//void _Sort(char list[], int left, int right) {
//	if (left <= right) {
//		int pivot = left;
//		int i = left + 1;
//		int j = right;
//		do {
//
//			while (list[pivot] > list[i])
//				++i;
//			while (list[pivot] < list[j])
//				--j;
//			if (i <= j) {
//				//swap
//				int temp = list[i];
//				list[i] = list[j];
//				list[j] = temp;
//		
//				++i;
//				--j;
//			}
//		} while (i <= j);
//
//		int temp = list[j];
//		list[j] = list[pivot];
//		list[pivot] = temp;
//
//		_Sort(list, left, j - 1);
//		_Sort(list, j + 1, right);
//
//
//	}
//}
//void Sort(char list[], int size) {
//	_Sort(list, 0, size - 1);
//}
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	char ch1[100], ch2[200];
//	int size;
//
//	//�����Է¹ޱ�
//	scanf("%s", ch1);
//	scanf("%s", ch2);
//
//	//������ null������ ������ ���ϱ�
//	int i = 0;
//	for (i = 0; ch1[i]; ++i) {
//	}
//
//	size = i;
//
//	//����
//	Sort(ch1, size);
//	Sort(ch2, size);
//
//	//�ε������� ���ϱ�
//	//���ϴٰ� �ϳ��� �ٸ��� NO ���
//	int j;
//	for (j = 0; ch1[j]; ++j) {
//		if (ch1[j] != ch2[j]) {
//			printf("NO");
//			break;
//		}
//	}
//	
//	//i���� null�� ������ YES���
//	if (j == size)
//		printf("YES");
//
//
//	return 0;
//}

////15. �Ҽ��� ����
//bool isPrime(int x) {
//	if (x == 1) return 0;
//	bool prime = true;
//	for (int i = 2; i*i <= x; ++i) {
//		if (x % i == 0) {
//			prime = false;
//			break;
//		}
//	}
//
//	return prime;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int n, cnt = 0;
//	scanf("%d", &n);
//
//	//1~n���� �Ҽ� ���� ���ϱ�
//	for (int i = 2; i <= n; ++i) {
//		//i�� �Ҽ��̸� 1 ����
//		if (isPrime(i)) {
//			++cnt;
//		}
//	}
//
//	printf("%d", cnt);
//
//	return 0;
//}
//
////15. �Ҽ��� ����
//bool isPrime(int x) {
//	if (x == 1) return 0;
//	bool prime = true;
//	for (int i = 2; i < x; ++i) {
//		if (x % i == 0) {
//			prime = false;
//			break;
//		}
//	}
//
//	return prime;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int n, cnt = 0;
//	scanf("%d", &n);
//
//	//1~n���� �Ҽ� ���� ���ϱ�
//	for (int i = 2; i <= n; ++i) {
//		//i�� �Ҽ��̸� 1 ����
//		if (isPrime(i)) {
//			++cnt;
//		}
//	}
//
//	printf("%d", cnt);
//
//	return 0;
//}


////15. �Ҽ��� ����
//bool isPrime(int x) {
//	if (x == 1) return 0;
//	bool prime = true;
//	for (int i = 2; i < x; ++i) {
//		if (x % i == 0) {
//			prime = false;
//			break;
//		}
//	}
//
//	return prime;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int n, cnt = 0, num[30000];
//	scanf("%d", &n);
//	
//	//���� �迭�� ����
//	for (int i = 0; i <= n; ++i) {
//		num[i] = i;
//	}
//
//	//1~n���� �Ҽ� ���� ���ϱ�
//	for (int i = 2; i <= n; ++i) {
//		//i�� �Ҽ��̸� 1 ����
//		if (isPrime(num[i])) {
//			++cnt;
//			//i�� ����� ��� 1�� �����
//			for (int j = 2; j * i <= n; ++j) {
//				num[i*j] = 1;
//			}
//		}
//	}
//
//	printf("%d", cnt);
//
//	return 0;
//}

////15. �Ҽ��� ����
//bool isPrime(int x) {
//	if (x == 1) return 0;
//	bool prime = true;
//	for (int i = 2; i < x; ++i) {
//		if (x % i == 0) {
//			prime = false;
//			break;
//		}
//	}
//
//	return prime;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int n, cnt = 0;
//	scanf("%d", &n);
//	int* p = (int*)malloc(sizeof(int) * (n + 2));
//	for (int i = 0; i <= n; ++i) {
//		p[i] = i;
//	}
//
//	for (int i = 2; i <= n; ++i) {
//		for (int j = i + 1; j <= n; ++j) {
//			if (p[j] == 0) break;
//			if (p[j] % i == 0) {
//				p[j] = 0;
//			}
//		}
//	}
//
//	//1~n���� �Ҽ� ���� ���ϱ�
//	for (int i = 2; i <= n; ++i) {
//		//i�� �Ҽ��̸� 1 ����
//		if (p[i] != 0 && isPrime(i)) ++cnt;
//
//	}
//
//	printf("%d", cnt);
//	free(p);
//
//	return 0;
//}

////14. ������ �Ҽ�
//#include <stdio.h>
//bool isPrime(int x) {
//	if (x == 1) return 0;
//	int prime = 1;
//
//	for (int i = 2; i < x; ++i) {
//		if ((x % i) == 0) {
//			prime = 0;
//			return prime;
//		}
//	}
//	return prime;
//}
//
//int reverse(int x) {
//	int res = 0, temp;
//
//	while (x > 0) {
//		temp = x % 10;
//		res = res * 10 + temp;
//		x /= 10;
//	}
//
//	return res;
//}
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n, value;
//	int num[100];
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &value);
//
//		//�����´�.
//		value = reverse(value);
//
//		//������ �� �Ҽ� ����
//		if (isPrime(value)) {
//			printf("%d ", value);
//		}
//
//	}
//
//	return 0;
//}

////14. ������ �Ҽ�
//#include <stdio.h>
//bool isPrime(int x) {
//	if (x == 1) return 0;
//	int prime = 1;
//
//	for (int i = 2; i < x; ++i) {
//		if ((x % i) == 0) {
//			prime = 0;
//			return prime;
//		}
//
//	}
//
//	return prime;
//}
//
//
//int reverse(int x) {
//	int i = 1,k, digit, res = 0,ten=1;
//	//10��� 0 ���ֱ�
//	while (1) {
//		if (x % 10 == 0) {
//			x /= 10;
//		}
//		else break;
//	}
//	digit = int (x / 10);
//
//	//�ڸ��� ���ϱ�
//	while (digit) {
//		digit = int(digit / 10);
//		++i;
//	}
//
//	//���� ���ڸ��� ���� �ڸ����� ǥ��
//	for (int j = 1; j < i; ++j) {
//		ten *= 10;
//	}
//
//	//������
//	int temp = x, mod;
//	for (int j = 0; j < i; ++j) {
//		mod = temp % 10;
//		temp = (int)temp / 10;
//
//		mod *= ten;
//		ten /= 10;
//		res += mod;
//
//	}
//
//		
//	/*	
//	while () {
//		mod = x % 10;
//
//	}*/
//
//
//	return res;
//}
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n,value;
//	int num[100];
//	scanf("%d", &n);
//	
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &value);
//	
//		//�����´�.
//		value = reverse(value);
//		
//		//������ �� �Ҽ� ����
//		if (isPrime(value)) {
//			printf("%d ", value);
//		}
//		
//	}
//
//	return 0;
//}

////13. ���� ���� ���� �ڸ���
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	char num[100] = { 0 };
//	scanf("%s", num);
//	int digit[10] = { 0 };
//	int mod = 0, max = -1, maxIndex;
//	
//	for (int i = 0; num[i]; ++i) {
//		int check = num[i] - 48;
//		++digit[check];
//	}
//
//	for (int i = 9; i >= 0; --i) {
//		if (max <= digit[i]) {
//			max = digit[i];
//			maxIndex = i;
//		}
//	}
//
//	//for (int i = 9; i >= 0; --i) {
//	//	if (max == digit[i]) {
//	//		maxIndex = i;
//	//		break;
//	//	}
//	//}
//
//	printf("%d", maxIndex);
//	return 0;
//}

////13. ���� ���� ���� �ڸ���
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	char num[100] = {0};
//	scanf("%s", num);
//	int digit[10] = { 0 };
//	int mod = 0, max = -1, maxIndex;
//
//	for (int i = 0; num[i]; ++i) {
//		int check = num[i] - 48;
//		
//		switch (check)
//		{
//		case 0:
//			++digit[0];
//			break;
//		case 1:
//			++digit[1];
//			break;
//		case 2:
//			++digit[2];
//			break;
//		case 3:
//			++digit[3];
//			break;
//		case 4:
//			++digit[4];
//			break;
//		case 5:
//			++digit[5];
//			break;
//		case 6:
//			++digit[6];
//			break;
//		case 7:
//			++digit[7];
//			break;
//		case 8:
//			++digit[8];
//			break;
//		case 9:
//			++digit[9];
//			break;
//		default:
//			break;
//		}
//	}
//
//	for (int i = 9; i >= 0; --i) {
//		if (max < digit[i])
//			max = digit[i];
//	}
//
//	for (int i = 9; i >= 0; --i) {
//		if (max == digit[i]) {
//			maxIndex = i;
//			break;
//		}
//	}
//	
//	
//	printf("%d", maxIndex);
//	return 0;
//}

////13. ���� ���� ���� �ڸ���
//#include <stdio.h>
//int main() {
//	long long n;
//	scanf("%d",&n);
//	int digit[10] = {0};
//	int mod = 0, max = -1, maxIndex;
//	int temp = n;
//	
//	while (temp) {
//		mod = temp % 10;
//		++digit[mod];
//		temp /= 10;
//	}
//
//	for (int i = 0; i < 10; ++i) {
//		printf("%d ", digit[i]);
//	}
//	printf("\n");
//
//	for (int i = 9; i >= 0; --i) {
//		if (max < digit[i])
//			max = digit[i];
//	}
//
//	for (int i = 9; i >= 0; --i) {
//		if (max == digit[i]) {
//			maxIndex = i;
//			break;
//		}
//	}
//
//	printf("%d", maxIndex);
//
//	return 0;
//}

////57. ����Լ� ������ ���
//#include<stdio.h>
//void D(int x) {
//	if (x == 0) return;
//	else {
//		D(x / 2);
//		printf("%d",x%2);
//	}
//}
//int main() {
//	int n;
//	scanf("%d",&n);
//
//	D(n);
//
//	return 0;
//}


////57. ����Լ� ������ ���
//
//#include <stdio.h>
//int size = 0;
//void Digit(int n, int digit[]) {
//	if (n <= 0)	return;
//	else {
//		digit[size++] = n % 2;
//
//		n = n / 2;
//		Digit(n, digit);
//		//printf("%d", digit[--size]);
//	}
//}
//int main() {
//
//	int n, digit[100];
//	scanf("%d", &n);
//
//	Digit(n, digit);
//	for (int i = size - 1; i >= 0; --i) {
//		printf("%d", digit[i]);
//	}
//	return 0;
//}

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
//}



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

////55.��������(stack)
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
//		if (i == N && stack[top - 1] > check) {//���̻� stack�� push �� ���� ���� stack�� ���� �ԷµǾ�� �� ������ Ŭ ��� �Ұ���
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

////55.��������(stack)
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

////56. ����Լ� �м�
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



////8.�ùٸ� ��ȣ -����
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

////8.�ùٸ� ��ȣ
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




////7.����ܾ��-����Ǯ��
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
//				restr[j++] = str[i] + 32; //���� ���� �����ϰ� j�� 1 ����
//			else
//				restr[j++] = str[i]; 
//		}
//	}
//	restr[j] = '\0'; //���ڿ� �������� �� ���� �Է����� %s�� ����ϱ� ����
//	printf("%s",restr);
//
//	return 0;
//}

////7.����ܾ��
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

////6.���ڸ� ����
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

////6.���ڸ� ����
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

////5. ���̰��
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

////4.������
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

////4. ������
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


////3. �����
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

////3. �����
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
