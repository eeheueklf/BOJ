#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, result;
    
    cin >> N;
    for(int i=1;i<=N;i++){
        int t = 0 ;
        result = i;
        t = i + i%10 + i%100/10 + i%1000/100
        + i%10000/1000 + i%100000/10000 + i%1000000/100000;
        if(t==N) break;
    }
    if(result==N) cout << 0;
    else cout << result;
}