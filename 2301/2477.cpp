#include <iostream>
#include <vector>
using namespace std;
//안됨 코드 수정 필요
int find(vector<pair<int, int>> v, int k){
    int cnt = 0;
    for(int i=0;i<6;i++){
        if(v[i].first == k)
            cnt++;
    }
    if(cnt==2) return k;
    return k+1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for(int i=0;i<6;i++){
        int d, h;
        cin >> d >> h;
        v.push_back(make_pair(d, h));
    }

    int a, b, c=1, d=3, c_i=0, d_i=0;
    a = find(v, 1);
    b = find(v, 3);
    if(a==1) c = 2;
    if(b==3) d = 4;
    for(int i=0;i<6;i++){
        if(v[i].first == c){
            c_i = i;
            break;
        }
        if(v[i].first == d){
            d_i = i;
            break;
        }
    }
    int i1, i2, ei, fi;
    fi = c_i + d_i;
    ei = c_i + d_i + 1;
    if(ei==6) ei =0;
    // 0 1 2 3 4 5
    // 0 1 2 3 4 5    8 9 -> 2 3
    i1 = fi+3; i2 = fi+4;
    if(i1>5) i1 -= 6;
    if(i2>5) i2 -= 6;

    // cout << "\nRESULT" <<  i1 << i2;
    cout << n * v[fi].second * v[ei].second - (n * v[i1].second * v[i2].second);
}