#include <iostream>
using namespace std;

void reverse(int i, int j, int array[]){
    int temp, count = j-i+1;
    for(int Cnt=0;Cnt<count/2;Cnt++){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++; j--;
    }
}

void print(int N, int array[]){
    for(int i=1;i<=N;i++){
        cout << array[i] << " ";
    }
}

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
        reverse(i, j, a);
    }
    print(N, a);
}

