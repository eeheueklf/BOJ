// 이분 탐색
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

	int N, t;
    vector<int> v, p;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> t;
        v.push_back(t);
        p.push_back(t);
	}

	sort(p.begin(), p.end());
    p.erase(unique(p.begin(), p.end()),p.end());

	for (int i = 0; i < N; i++) {
		int right = p.size() - 1; 
		int left = 0;
        int mid;
		while (left <= right) {
			mid = (right + left) / 2;
			if (p[mid] == v[i]) {
				break;
			}
			if (p[mid] > v[i]) 
				right = mid - 1;
			else 
				left = mid + 1;
		}
        cout << mid << " ";
	}
	
	
}