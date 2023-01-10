#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, r;
    bool flag = true;
    cin >> N;
    r = N;
    if(N==2)
        cout << "2";
    else if(N==1) {}
    else 
        while(flag){
            for(int j=2;j<=N;j++){
                if(j == N) flag = false;
                if(r%j==0){
                    r /= j;
                    cout << j<<"\n";
                    break;
                }
            }
        }

    return 0;
}

