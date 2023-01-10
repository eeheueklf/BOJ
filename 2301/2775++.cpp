#include <iostream>
using namespace std;

int getSum(int a, int b){
    if(a==0) return b;
    if(b==1) return 1;
    return getSum(a-1, b) + getSum(a,b-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, k, n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> k >> n;
        cout << getSum(k,n)<<"\n";
    }
    return 0;
}