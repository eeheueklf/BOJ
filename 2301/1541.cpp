#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s, num;
    bool sign=false;
    vector<int> v;
    int r=0;
    cin >> s;

    for (int i=0;i<s.length();i++){
        int j=0;
        if(isdigit(s[i])==0){
            int t; 
            t = stoi(num);
            if(sign) t*=-1;
            v.push_back(t);
            if(s[i]=='-') sign=true;
            num = "000000"; 
        }
        else if(i==s.length()-1){
            if(num.size()>5)
                num=s[i];
            else
                num+=s[i];
            int t; 
            t = stoi(num);
            if(sign) t*=-1;
            v.push_back(t);
        }
        else{ //숫자이면
            if(num.size()>5)
                num=s[i];
            else
                num+=s[i];
        } 
    }
    for (int i=0;i<v.size();i++){
        r+= v[i];
    }
    cout << r;
    return 0;
}

