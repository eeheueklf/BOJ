#include <iostream>

using namespace std;

int main(){
    int ComNum, N, a, b;
    int Net[10000][2], Com[101] = {0,};
    cin >> ComNum >> N;

    for(int i=0;i<N;i++){
        cin >> a >> b;
        if(a<=b){
            Net[i][0] = a;
            Net[i][1] = b;
        }
        else{
            Net[i][0] = b;
            Net[i][1] = a;
        }
    }
    Com[1] = 1;
    for(int i=0;i<N;i++){
        if(Com[Net[i][0]+1]==1)
            Com[Net[i][1]+1] = 1;
    }

    for(int i=1;i<=N;i++){
        cout << Com[i];
    }
}