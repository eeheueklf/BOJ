#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T, H, W, N, Y=0, X=0;
    cin >> T;
    for(int i=0;i<T;i++){
        cin >> H >> W >> N;
        X = N % H;
        Y = N / H;
        if(X>0) Y++;
        else X = H;
        cout << X*100+Y << "\n";
        
    }
    return 0;
}
