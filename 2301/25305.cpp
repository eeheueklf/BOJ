#include <iostream>
using namespace std;
void swap(int arr[], int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, k;
    cin >> N >> k;
    int score[N+1];
    for(int i=0;i<N;i++){
        cin >> score[i];
    }

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(score[j]>score[i]) swap(score, j, i);
        }
    }

    cout << score[k-1];
    return 0;
}
