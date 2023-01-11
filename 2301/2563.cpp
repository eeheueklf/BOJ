#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, Area[101][101], sum=0;
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
                Area[i][j] = 0;
            }
    }
    cin >> N;
    for(int i=0;i<N;i++){
        int A, B;
        cin >> A >> B;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                Area[A+i][B+j]++;
            }
        }
    }

    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
                if(Area[i][j] != 0) sum++;
            }
    }
    cout << sum;
    return 0;
}

