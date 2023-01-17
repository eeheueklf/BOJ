#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<pair<int,int>> v;

    for(int i=0;i<N;i++){
        int w, h;
        cin >> w >> h;
        v.push_back(make_pair(w, h));
    }

    
    for(int i=0;i<N;i++){
        int cnt = 0;
        for(int j=0;j<N;j++){
            if(v[i].first < v[j].first && v[i].second < v[j].second)
                cnt++;
        }
        cout << cnt+1 << " ";
    }
}