#include <iostream>
using namespace std;

int main(){
    int a[101] = {0,};
    int N, M;
    cin >> N >> M;

    for(int i=1;i<=N;i++){
        a[i] = i;
    }

    for(int Cnt=0;Cnt<M;Cnt++){
        int i, j, tmp;
        cin >> i >> j;
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }

    for(int i=1;i<=N;i++){
        cout << a[i] << " ";
    }
}
