#include <iostream>
using namespace std;

int queue[5000001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, front, back, temp;
    cin >> N;
    int *queue = new int[N+1];

    for(int i=0;i<N;i++){
        queue[i]=i+1;
    }
    back = N;
    while (back-front!=1){
        front++;
        temp=queue[front];
        front++;
        back++;
        queue[back]=temp;
    }
    cout << queue[back];
    return 0;
}