#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,t;
    cin >> N;

    vector<int> a;
    
    for(int i = 0; i < N; i++)
    {
        cin >> t;
        a.push_back(t);
    }
    
    sort(a.begin(),a.end());
    
    for(int i = 0; i < N; i++)
        cout << a[i] << "\n";
}
