#include <iostream>

using namespace std;

int main(){

    int N, dot = 2, num;
    cin >> N;

    for(int i=0;i<N;i++){
        dot = dot + (dot - 1);
        num = dot * dot;
    }

    cout << num;
    
}