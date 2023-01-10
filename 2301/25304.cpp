#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum, b, c, N;

    cin >> sum >> N;
    for(int i=0;i<N;i++){
        cin>> b >> c;
        sum -= b*c;
    }

    if(sum==0) cout << "Yes";
    else cout << "No";

    return 0;
}
