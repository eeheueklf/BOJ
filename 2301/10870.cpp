#include <iostream>

int fib(int N){
    if(N==0) return 0;
    if(N==1) return 1;
    return fib(N-2) + fib(N-1);
}

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    cout << fib(N);
}