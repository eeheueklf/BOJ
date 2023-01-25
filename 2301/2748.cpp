#include <iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n, a=0, b=1, r=0;
    cin >> n;
    for(int i=0;i<n-1;i++){
        r = a + b;
        a = b;
        b = r;
    }
    if(n==1) cout << 1;
    else cout << r;
}

