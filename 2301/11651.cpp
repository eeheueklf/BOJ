#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,tx,ty;
    cin >> N;

    vector<pair<int, int>> p;
    for(int i = 0; i < N; i++)
    {
        cin >> tx >> ty;
        p.push_back(make_pair(ty, tx));
    }
    
    sort(p.begin(), p.end());
    
    for(int i = 0; i < N; i++)
        cout << p[i].second << " " << p[i].first << "\n";
}