#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, r=0;
    vector<int> v;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        v.push_back(t);
    }
    for(int i=v.size()-1;i>=0;i--){
        if(k/v[i]!=0) {
            r+=k/v[i];
            k%=v[i];
        }
    }
    cout << r;
}
