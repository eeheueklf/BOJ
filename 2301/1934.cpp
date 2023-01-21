#include <iostream>
using namespace std;

void find(int a, int b){
    int i=1, min=1;
    while(true){
        if(a%i==0&&b%i==0){
            a/=i; b/=i;
            min *= i;
            i=1;
        }
        if(i>=a||i>=b) {
            cout << min * a * b << "\n";
            break;
        }
        i++;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, a, b;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> a >> b;
        find(a, b);
    }
}
