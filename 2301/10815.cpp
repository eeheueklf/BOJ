// 이분 탐색
#include<iostream>
#include<algorithm>
using namespace std;
int a[500001];
int b[500001];
int c[500001] = { 0, };
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

	int N, M;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> b[i];
	}

	sort(a, a + N);

	for (int i = 0; i < M; i++) {
		int right = N - 1; 
		int left = 0;
		while (left <= right) {
			int mid = (right + left) / 2;
			if (a[mid] == b[i]) {
				c[i] = 1;
				break;
			}
			if (a[mid] > b[i]) 
				right = mid - 1;
			else 
				left = mid + 1;
		}
	}
	for (int i = 0; i < M; i++) 
		cout << c[i] << ' ';
	
}