#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N,m;
    vector<int> v;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> m;
        v.push_back(m);
    }
    sort(v.begin(), v.end());
    cout << v[0]*v[N-1];
    return 0;
}
