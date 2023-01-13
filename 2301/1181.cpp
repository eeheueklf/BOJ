#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(string a, string b) {
    if (a.size() == b.size()) {
        return a < b;
    }
    else {
        return a.size() < b.size();
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;

    string str, temp;
    vector<string> v;
    for(int i=0;i<N;i++){
        cin >> str;
        v.push_back(str);
    }
    stable_sort(v.begin(), v.end(), compare);
    for(int i=0;i<N;i++){
        if (temp == v[i]) continue;
        cout << v[i] << '\n';
        temp = v[i];
    }
}