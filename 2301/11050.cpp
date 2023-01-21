#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, r=1;
    cin >> n >> k;
    for(int i=1;i<=k;i++){
        r*=n;
        n--;
        r/=i;
    }
    cout << r;
}
