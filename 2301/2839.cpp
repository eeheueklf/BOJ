#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, left=0, min=0, result=-1;
    cin >> N;
    
    for(int i=0;i<N/5+1;i++){
        min =i;
        left=N-(5*i);
        min+=left/3;
        left=left%3;
        if(left==0) result = min;
    }
    cout << result;
    return 0;
}