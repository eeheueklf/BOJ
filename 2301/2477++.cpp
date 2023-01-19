#include <iostream>
using namespace std;

int N;
int arr[6 + 2][2 + 2]; 
int cnt[4]; 

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int s = 1;
    int b = 1;

    cin >> N;
    for (int i = 0; i < 6; i++) {
        cin >> arr[i][0] >> arr[i][1];
        cnt[arr[i][0]]++;//아하 횟수 배열 사용 ...
    }

    for (int i = 0; i < 6; i++) {
        if (cnt[arr[i][0]] == 1) {
            b *= arr[i][1];
        }

        int n = (i + 1) % 6;
        int nn = (i + 2) % 6;
        // %6이라는 이런 수가 ! 응용 대박이다 ..
        if (arr[i][0] == arr[nn][0]) s *= arr[n][1];
    }

    cout << ((b - s) * N);

    return 0;
}