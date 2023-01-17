#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    vector<int> v;

    for(int i=0;i<N;i++){
        int card;
        cin >> card;
        v.push_back(card);
    }
    int max=0;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            for(int k=j+1;k<N;k++){
                if(v[i]+v[j]+v[k] <= M && v[i]+v[j]+v[k] > max){
                    max = v[i]+v[j]+v[k];
                }
            }
        }
    }
    cout << max;
}