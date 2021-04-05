//50. 영지(territory) 선택 : (small)
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


	//i,j는 누적해서 더해 갈 시작위치 값을 의미
	for (int i = 0; i <= H - HH; ++i) {
		for (int j = 0; j <= W - HW; ++j) {
			area = 0;

			//세로는 몇회, 가로는 몇회까지만 더 할지
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




////48. 각 행의 평균과 가장 가까운 값
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
//		//정수/실수 => 실수
//		avg = sum / (double)j + 0.5;
//		minsubnum = num[i][0];
//		minsub = abs(avg - num[i][0]); //abs 절대값 함수(algoritm 헤더파일에 존재)
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
////48. 각 행의 평균과 가장 가까운 값
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
//		//정수/실수 => 실수
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

////47.봉우리(2차원 배열 탐색)
//#include<stdio.h>
////전역 변수로 선언하면 자동으로 초기값 0 
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
//				//중심점 기순 상하좌우 한 곳이라도 큰 곳 있으면 검사 종료 및 체크
//				if (map[i][j] <= map[i + dx[k]][j + dy[k]]) {
//					flag = 1;
//					break;
//				}
//			}
//			//체크한적 없으면 카운트값 증가
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
//////47.봉우리(2차원 배열 탐색)
//#include<stdio.h>
////전역 변수로 선언하면 자동으로 초기값 0 
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

////41.연속된 자연수의 합
//#include<stdio.h>
//int main() {
//	int N, sum = 1, cnt = 0,mod,quenti;
//	scanf("%d", &N);
//
//	//i는 연속된 숫자의 개수를 의미
//	//i가 2라면 연속된 숫자가 2개라는 뜻
//	for (int i = 2; i < N; ++i) {
//		sum += i;
//		//누적된 값이 N이 된 경우는 1부터 0을 하나씩 분배해주었다고 이해하면되고
//		//누적된 값이 N 을넘어선 경우는 자연수를 더했을 때 합이 N이 될 수 없다.
//		if (sum > N) break;// 1부터 연속된 숫자의 합이 이미 주어진 값이 되었다면 다음 연속한 숫자를 더한경우는 이제 경우의 수가 없음
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


////41.연속된 자연수의 합
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
//	//N-1부터 연속된 자연수를 더해서 N이 되는 수를 찾는다.
//	//찾았을 때 카운트 개수를 증가시키고
//	//연속된 자연수 개수를 출력시킨다.
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

////41.연속된 자연수의 합
//#include<stdio.h>
//int main() {
//	int N, sum = 0, cnt = 0;
//	scanf("%d", &N);
//
//	//N-1부터 연속된 자연수를 더해서 N이 되는 수를 찾는다.
//	//찾았을 때 카운트 개수를 증가시키고
//	//연속된 자연수 개수를 출력시킨다.
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

////40.교집합(투포인터 알고리즘)
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
////40.교집합(투포인터 알고리즘)
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
////40.교집합(투포인터 알고리즘)
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


////40.교집합(투포인터 알고리즘)
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
//	//b값 받으면서 a랑 중복값 찾기
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
//	//c 내림차순 정렬하면서 출력
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
////40.교집합(투포인터 알고리즘)
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
//	//b값 받으면서 a랑 중복값 찾기
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
//	//c 내림차순 정렬하면서 출력
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

////39. 두 배열 합치기
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
//	//i>=N Or j>=M 이면 위의 조건문을 빠져나간다.
//	//이때 j<M이면 b배열의 남은 값을 c에 넣고
//	//j<N이면 a배열의 남은 값을 c에 넣는다.
//
//	//while문이 순서대로 2개 존재하지만 두개의 while문은 모두 실행되지 않는다.
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


////31. 탄화수소 질량 
//// 코드수정(by 가독성)
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	char ch[100];
//	int summass = 0, sumc = 0, sumh = 0, carbon = 0, hydrogen = 0;
//	scanf("%s", ch);
//	int i, pos;
//
//	//pos로 H의 위치 표시
//	if (ch[1] == 'H') {
//		sumc = 1;
//		pos = 1;
//	}
//	else {
//		//H가 나올 때까지 탄소의 수를 구함
//		for (i = 1; ch[i] != 'H'; ++i) {
//			sumc = sumc * 10 + (ch[i] - 48);
//		}
//		pos = i;
//	}
//
//	//H 문자 다음 부터 수소의 수를 구함
//	//이때 H다음에 1일 경우는 예외로 따로 구해준다.
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


////31. 탄화수소 질량
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	char ch[100];
//	int summass = 0, sumc = 0, sumh = 0, carbon = 0, hydrogen = 0;
//	scanf("%s", ch);
//	int i, j;
//
//	//i로 H의 위치 표시
//	if (ch[1] == 'H') {
//		i = 1;
//		sumc = 1;
//	}
//	else {
//		//H가 나올 때까지 탄소의 수를 구함
//		for (i = 1; ch[i] != 'H'; ++i) {
//			carbon = ch[i] - 48;
//			sumc = sumc * 10 + carbon;
//		}
//	}
//
//	//H 문자 다음 부터 수소의 수를 구함
//	//이때 H다음에 1일 경우는 예외로 따로 구해준다.
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

////30. 3의 개수는?(large)
//#include <stdio.h>
//int main() {
//	freopen("input.txt", "rt", stdin);
//	int n, cntThree = 0, cntTotal = 0, digit = 0, i, temp = 1, digitStartnum;
//	scanf("%d", &n);
//	temp = n;
//	//자리수 구하기
//	while (temp > 0) {
//		++digit;
//		temp /= 10;
//	}
//
//	digitStartnum = 1;
//	if (n >= 10) {
//		//구한 자리수 아래까지는 규칙대로 3 구하기
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
////29.3의 개수는?(small)
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



////29.3의 개수는?(small)
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
//	////자리수 구하기
//	//while (temp != 0) {
//	//	temp /= 10;
//	//	++digit;
//	//}
//
//	return 0;
//
//}
//


////28. N!에서 0의 개수
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n, temp, cnt1 = 0, cnt2 = 0;
//	scanf("%d", &n);
//
//	//2부터 n까지 소수들로 계속 나누어 보기
//	for (int i = 2; i <= n; ++i) {
//		temp = i;
//		//i가 증가할때마다 나누는 값 2로 초기화해서 다시 나누기
//		//2로 계속 나누어 지지 않을 때
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

////28. N!에서 0의 개수
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n, cnt = 0, temp;
//	scanf("%d", &n);
//	int* p = (int*)calloc(n + 1, sizeof(int));
//
//	//2부터 n까지 소수들로 계속 나누어 보기
//	for (int i = 2; i <= n; ++i) {
//		temp = i;
//		//i가 증가할때마다 나누는 값 2로 초기화해서 다시 나누기
//		//2로 계속 나누어 지지 않을 때
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
//	//10의 배수이면 5와 2가 소인수로 존재해야함
//	//5와 2가 있다면 cnt증가하고 반복하기 위해 감소시킴
//	while (p[5] > 0 && p[2] > 0) {
//		++cnt;
//		--p[5];
//		--p[2];
//	}
//
//	printf("%d", cnt);
//
//}

//////27. N!의 표현법
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

////27. N!의 표현법
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
//	//숫자 입력
//	scanf("%d", &n);
//
//	//입력된 값 팩토리얼 구하기
//	num = Factorial(n);
//
//	//팩토리얼을  소수별로 나누어 보면서 나누어 떨어지면 해당 소수 카운트 증가시키키
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
//	//소수개수 몇개 필요한지 출력하기
//
//	printf("%d! = ", n);
//	for (int i = 2; i <= n; ++i) {
//		if (prime[i] != -1) {
//			printf("%d ", prime[i]);
//		}
//	}
//}

////26. 마라톤
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


////25. 석차 구하기
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
//	//점수배열과, 등수표시 배열값 입력
//	//등수표시 배열은 초기값 1로 설정
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
////25. 석차 구하기
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
//	//정렬
//	Sort(p2, n);
//
//
//	//p1 첫 인덱스부터 정렬된 p2의 값을 찾아서 등수 출력
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


////23. 연속 부분 증가수열
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


////23. 연속 부분 증가수열
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

////23. 연속 부분 증가수열
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

////22. 온도의 최대값
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
//		//온도값 입력 받으면서 첫번째 구간의 합 먼저 구하기
//		if (i < K)
//			sum += p[i];
//	}
//
//	max = sum;
//	//i는 더해지는 값을 기준으로 생각해서 초기값 설정
//	for (int i = K; i < N; ++i) {
//		//구간에서 하나 추가된 값과 하나전값 빼서 구간합 구하기
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
////22. 온도의 최대값
//#include <stdio.h>
//int main() {
////	freopen("input.txt", "rt", stdin);
//
//	int N, K;
//	int temper[100000];
//	int sum = 0, max = -21400000;
//	scanf("%d %d", &N, &K);
//
//	//i는 빠지는 값을 기준으로 생각해서 초기값 설정
//
//	for (int i = 0; i < N; ++i) {
//		scanf("%d", &temper[i]);
//		//온도값 입력 받으면서 첫번째 구간의 합 먼저 구하기
//		if (i < K)
//			sum += temper[i];
//	}
//
//	max = sum;
//	for (int i = 0; i < N - K; ++i) {
//		//구간에서 하나 추가된 값과 하나전값 빼서 구간합 구하기
//		sum += (temper[K + i] - temper[i]);
//		if (sum > max)
//			max = sum;
//	}
//	printf("%d", max);
//
//	return 0;
//}
//
////22. 온도의 최대값
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
//		//i일부터 K일까지 온도합 구하기
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

////21. 카드 게임
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
////21. 카드 게임
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

////20. 가위 바위 보
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n;
//	int a[100], b[100];
//	scanf("%d", &n);
//	//a입력
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &a[i]);
//	}
//	//b입력
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &b[i]);
//	}
//
//	for (int i = 0; i < n; ++i) {
//		//비기는 경우와 아닌경우 나누고
//		if (a[i] == b[i]) printf("D\n");
//		//a가 이기는 경우
//		else if (a[i] == 1 && b[i] == 3)printf("A\n");
//		else if (a[i] == 2 && b[i] == 1)printf("A\n");
//		else if (a[i] == 3 && b[i] == 2)printf("A\n");
//		//나머지는 B가이기는 경우
//		else printf("B\n");
//	}
//
//	return 0;
//}

////20. 가위 바위 보
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n;
//	int a[100], b[100];
//	scanf("%d", &n);
//	//a입력
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &a[i]);
//	}
//	//b입력
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &b[i]);
//	}
//
//	for (int i = 0; i < n; ++i) {
//		//비기는 경우와 아닌경우 나누고
//		//a가 1,2,3 냈을때로 비교
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

////20. 가위 바위 보
//#include <stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n;
//	int a[100], b[100];
//	scanf("%d", &n);
//	//a입력
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &a[i]);
//	}
//	//b입력
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &b[i]);
//	}
//
//	for (int i = 0; i < n; ++i) {
//		//예외 처리 가위바위보에서 숫자 큰놈이 이긴다에서 가위와 보에서 예외가 발생 예외만 먼저 적용
//		//예외 에서는 작은 값이 이김
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

////19. 분노유발자
//#include<stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//
//	int n;
//	int num[100], peonum = 0, max = 0;
//	scanf("%d", &n);
//
//	//읽으면서 처리가 안되기 때문 배열에 저장
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &num[i]);
//	}
//	
//	//마지막 사람부터 검사할예정
//	//처음에는 마지막 혼자이므로 마지막이 최대값
//	//앞으로 검사해가면서 max보다 큰 값 찾으면 그 값이 뒷부분에서 최대값 임 
//	//지금까지의 분노유발자
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
////19. 분노유발자
//#include<stdio.h>
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	
//	int n;
//	int num[100], peonum = 0, sum=0;
//	scanf("%d", &n);
//	//읽으면서 처리가 안되기 때문 배열에 저장
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &num[i]);
//	}
//
//	for (int i = 0; i < n-1; ++i) {
//		peonum = 0;
//		for (int j = i + 1; j < n; ++j) {
//
//			//기준학생보다 작은 학생수 카운트
//			if (num[i] > num[j])
//				peonum += 1;
//		}
//
//		//뒷 학생수가 모두 기준 학생보다 작을 경우 분노유발자
//		//첫번째 학생: 기분보다 n-1명 작으면 분노유발자
//		//두번째 학생: 기분보다 n-2명 작으면 분노유발자
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
////19. 분노유발자
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
//			//기준학생보다 큰 학생 있다면 분노유발자 아님 검사 종료
//			//다음기준학생 검사
//			if (num[i] <= num[j]) {
//				break;
//			}		
//		}
//// 끝까지 갔으면 모두 기준학생보다 작은 것 
////분노유발자 한명 추가
//		if (j == n)
//			sum += 1;
//	}
//	printf("%d", sum);
//
//	return 0;
//
//}


////18. 층간소음
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
//		//기준 값보다 크면 초 값 증가
//		if (num > m)
//			++sc;
//		else {
//			sc = 0;
//		}
//		//다음 번 값에서 기준값을 넘지 않아 sc가 0으로 초기화 되기전 max값에 저장
//		if (maxSc < sc) {
//			maxSc = sc;
//		}
//	}
//
//	//한번도 울리지 않았다면 sc가 증가 하지 않고 sc =0값이 maxSc에도 저장 되었을것
//	if (maxSc == 0) printf("%d", -1);
//	else printf("%d", maxSc);
//
//	return 0;
//
//}


////18. 층간소음
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
//		//기준 값보다 크면 초 값 증가
//		if (num[i] > m) 
//			++sc;
//		else {
//			//초기화 전에 sc값 최대sc랑 비교하고 저장
//			if (maxSc < sc)
//				maxSc = sc;
//			sc = 0;
//		}
//		//else에서 sc 초기화 전에만 max 저장하면 마지막 숫자까지 연속적일 경우 max값 저장 비교할일 없기 때문
//		if (maxSc < sc)
//			maxSc = sc;
//	}
//
//	printf("%d", maxSc);
//	return 0;
//
//}

//////17.선생님퀴즈
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
//////17.선생님퀴즈
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


////16.아나그램
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
//	//문자입력받기
//	scanf("%s", ch1);
//	scanf("%s", ch2);
//
//	/*
//	첫번째 문자의 첫번째 인덱스부터 다음문자에 있는지 점검 있으면 교체
//	첫 번째 문자의 다음 인덱스 점검
//	위 상황 반복
//	매번 마다 flag 변수로 교체 상황 체크
//	교체가 없이 끝났다면 같은 문자 더이상 없으므로 아나그램 아님 루프문 종료
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
//		//같은것 있으면 교체했음 체크
//		//flag 그대로 0이면 같은것 없음 교체 안했음
//		if (flag == 0)break;
//	}
//
//	if (flag == 0) printf("NO");
//	else printf("YES");
//	
//	return 0;
//}
//
////16.아나그램
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
//	//문자입력받기
//	scanf("%s", ch1);
//	scanf("%s", ch2);
//
//	//마지막 null값으로 사이즈 구하기
//	int i = 0;
//	for (i = 0; ch1[i]; ++i) {
//	}
//
//	size = i;
//
//	//정렬
//	Sort(ch1, size);
//	Sort(ch2, size);
//
//	//인덱스별로 비교하기
//	//비교하다가 하나라도 다르면 NO 출력
//	int j;
//	for (j = 0; ch1[j]; ++j) {
//		if (ch1[j] != ch2[j]) {
//			printf("NO");
//			break;
//		}
//	}
//	
//	//i값이 null과 같으면 YES출력
//	if (j == size)
//		printf("YES");
//
//
//	return 0;
//}

////15. 소수의 개수
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
//	//1~n까지 소수 개수 구하기
//	for (int i = 2; i <= n; ++i) {
//		//i가 소수이면 1 증가
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
////15. 소수의 개수
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
//	//1~n까지 소수 개수 구하기
//	for (int i = 2; i <= n; ++i) {
//		//i가 소수이면 1 증가
//		if (isPrime(i)) {
//			++cnt;
//		}
//	}
//
//	printf("%d", cnt);
//
//	return 0;
//}


////15. 소수의 개수
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
//	//숫자 배열에 저장
//	for (int i = 0; i <= n; ++i) {
//		num[i] = i;
//	}
//
//	//1~n까지 소수 개수 구하기
//	for (int i = 2; i <= n; ++i) {
//		//i가 소수이면 1 증가
//		if (isPrime(num[i])) {
//			++cnt;
//			//i의 배수는 모두 1로 만들기
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

////15. 소수의 개수
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
//	//1~n까지 소수 개수 구하기
//	for (int i = 2; i <= n; ++i) {
//		//i가 소수이면 1 증가
//		if (p[i] != 0 && isPrime(i)) ++cnt;
//
//	}
//
//	printf("%d", cnt);
//	free(p);
//
//	return 0;
//}

////14. 뒤집은 소수
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
//		//뒤집는다.
//		value = reverse(value);
//
//		//뒤집은 값 소수 판정
//		if (isPrime(value)) {
//			printf("%d ", value);
//		}
//
//	}
//
//	return 0;
//}

////14. 뒤집은 소수
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
//	//10배수 0 없애기
//	while (1) {
//		if (x % 10 == 0) {
//			x /= 10;
//		}
//		else break;
//	}
//	digit = int (x / 10);
//
//	//자리수 구하기
//	while (digit) {
//		digit = int(digit / 10);
//		++i;
//	}
//
//	//제일 끝자리가 몇의 자리인지 표시
//	for (int j = 1; j < i; ++j) {
//		ten *= 10;
//	}
//
//	//뒤집기
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
//		//뒤집는다.
//		value = reverse(value);
//		
//		//뒤집은 값 소수 판정
//		if (isPrime(value)) {
//			printf("%d ", value);
//		}
//		
//	}
//
//	return 0;
//}

////13. 가장 많이 사용된 자릿수
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

////13. 가장 많이 사용된 자릿수
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

////13. 가장 많이 사용된 자릿수
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

////57. 재귀함수 이진수 출력
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


////57. 재귀함수 이진수 출력
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
//}



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

////5. 나이계산
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
