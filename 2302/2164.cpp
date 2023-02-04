#include <iostream>
using namespace std;
int queue[1000000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, front=1, back, temp;
    cin >> N;

    for(int i=1;i<=N;i++){
        queue[i]=i;
    }
    back = N;
    if(N==1) {
        cout << "1";
        return 0;
    }
    while(back-front!=1){
        front++;
        temp=queue[front];
        front++;
        back++;
        queue[back]=temp;
    }
    cout << queue[back];
    return 0;
}