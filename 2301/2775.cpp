#include <iostream>

using namespace std;

int home(int k, int n){
    if(k==0) return n;
    if(n==0) return 0;
    return home(k, n-1) + home(k-1, n);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T,k,n;
    cin >> T;

    for(int i=0;i<T;i++){
        cin >> k >> n;
        cout << home(k,n) << "\n";
    }
}
