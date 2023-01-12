// 카운팅(계수) 정렬
#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int count[10001]={0},N,t;

    cin >> N;
    for(int i=0;i<N;i++){
        cin>> t;
        count[t-1]++;
    }
    for(int i=0;i<10001;i++){
        if(count[i]!=0){
            for(int j=0;j<count[i];j++)
                cout << i+1 << "\n";
        }
    }
    return 0;
}
