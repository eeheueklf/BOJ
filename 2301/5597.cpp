#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, check[31]={};

    for(int i=0;i<28;i++){
        cin>> a;
        check[a]=1;
    }
    for(int i=0;i<30;i++){
        if(check[i+1]==0) cout <<i+1 << "\n";
    }

    return 0;
}
