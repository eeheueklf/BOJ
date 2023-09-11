#include <iostream>
using namespace std;

int main(){
    int a[101] = {0,};
    int N, M;
    cin >> N >> M;

    for(int Cnt=0;Cnt<M;Cnt++){
        int i, j, k;
        cin >> i >> j >> k;
        for(int Jnt=i;Jnt<=j;Jnt++)
        {
            a[Jnt] = k;
        }
    }

    for(int i=1;i<=N;i++){
        cout << a[i] << " ";
    }
}
