#include <iostream>

int factorial(int N){
    if(N<=1) return 1;
    return N * factorial(N-1);
}

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    cout << factorial(N);
}