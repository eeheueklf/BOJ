#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[101],N,v,f=0;

    cin >> N;
    for(int i=0;i<N;i++){
        cin>> arr[i];
    }
    cin >> v;
    for(int i=0;i<N;i++){
        if(arr[i]==v) f++;
    }
    cout << f;

    return 0;
}
