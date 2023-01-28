#include <iostream>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A, B, C;
    cin >> A >> B >> C;
    if(A>=B && A>=C){
        if(B>=C) cout << B;
        else cout << C;
    }
    else if(B>=C && B>=A){
        if(A>=C) cout << A;
        else cout << C;
    }
    else{
        if(B>=A) cout << B;
        else cout << A;
    }
}