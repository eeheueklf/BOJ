// 왜 안되는지 이유를 찾아야 함......
#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, T;
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> T;
        vector<string> v;
        vector<int> r;
        for(int j=0;j<T;j++){
            string clth, st;
            cin >> clth >> st;
            v.push_back(st);
            v.erase(unique(v.begin(),v.end()),v.end());
            r.push_back(1);
            for(int k=0;k<r.size()-1;k++){
                if(st.compare(v[k])==0) {
                    r[k]++;
                    r.erase(r.end() - 1);
                    break;
                }
            }
        }

        int result=1;
        for(int j=0;j<r.size();j++){
            result *= r[j]+1;
        }
        cout << result-1 << "\n";
    }
    return 0;
}

