#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum=0;
    for(int i=0;i<5;i++){
        int t;
        cin >> t;
        sum += t*t;
    }
    cout << sum%10;


    return 0;
}

