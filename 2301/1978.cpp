#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int M, N, min, sum=0;
    cin >> M >> N;
    min = N;
    for(int i=M; i<=N;i++){
        if(i==2) {
            min = i;
            sum+= i;
        }
        else if(i!=1){
        for(int j=2;j<i;j++){
                if(i%j==0) {
                    break;
                }
                if(j==i-1) {
                    sum += i;
                    if(min>=N) min=i;
                }
            }
        }
    }
    if(sum==0) cout << "-1";
    else cout << sum << "\n" << min;
    return 0;
}

