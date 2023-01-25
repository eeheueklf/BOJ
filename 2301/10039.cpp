#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum =0;
    for(int i=0;i<5;i++){
        int t;
        cin >> t;
        if(t<40) t=40;
        sum +=t;
    }
    cout << sum/5;

    return 0;
}

