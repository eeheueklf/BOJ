#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    int n, new_score, p, r=1;
    bool flag = false;
    cin >> n >> new_score >> p;

    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        v.push_back(t);
    }

    for(int i=0;i<n;i++){
        if(new_score < v[i])
            r++;
        else break;
    }
    if(n==p && v[n-1]>=new_score) r=-1;
    
    cout << r;
    return 0;
}