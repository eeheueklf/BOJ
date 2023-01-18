#include <iostream>
using namespace std;

bool check(int a, int b, int c){
    if(a*a+b*b==c*c) return true;
    if(a*a+c*c==b*b) return true;
    if(c*c+b*b==a*a) return true;
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c;
    
    while(true){
        cin >> a >> b >> c;
        if(a+b+c==0) break;
        if(check(a, b, c)) cout << "right\n";
        else cout << "wrong\n";
    };

    
}