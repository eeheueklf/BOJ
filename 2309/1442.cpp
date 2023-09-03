#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int N, M, count=0;
    set<string> S;
    cin >> N >> M;
    for(int i=0; i<N;i++){
        string s;
        cin >> s;
        S.insert(s);
    }

    for(int j=0;j<M;j++){
        string s;
        cin >> s;
        auto it = S.find(s);
        if (it != S.end()) count++;// 찾았으면
    }
    cout << count;
}
