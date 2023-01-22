#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        int N, M, num=1;
        cin >> N >> M;
        for(int j=1;j<=N;j++){
            num *=M;
            M--;
            num/=j;
        }
        cout << num << "\n";
    }
}