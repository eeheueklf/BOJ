#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, r=0;
    vector<int> A, B;
    
    cin >> N;

    for(int i=0;i<N;i++){
        int t;
        cin >> t;
        A.push_back(t);
    }
    for(int i=0;i<N;i++){
        int t;
        cin >> t;
        B.push_back(t);
    }

    sort(A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end());

    for(int i=0;i<N;i++){
        r+=A[i]*B[i];
    }

    cout << r;


}