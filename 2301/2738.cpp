#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M;
    cin >> N >> M;

    int A[N][M], B[N][M];
    
    for(int i=0; i<N;i++)
        for(int j=0;j<M;j++)
            cin >> A[i][j];

    for(int i=0; i<N;i++)         
        for(int j=0;j<M;j++)
            cin >> B[i][j];

    for(int i=0; i<N;i++){
        for(int j=0;j<M;j++)
            cout << A[i][j] + B[i][j] << " ";
        cout << "\n";
    }
    return 0;
}

