#include <iostream>

using namespace std;

int main() {
    int n, k, cnt=0;
    cout << "n, k 입력 해주세요 : \n";
    cin >> n >> k;
    for(int i=0;i<n;i++){
        if(n%(i+1)==0)  cnt++;
        if(cnt == k){
            break;
            cout << i+1;
        }
    }
    if(cnt<k) cout << 0;
}
