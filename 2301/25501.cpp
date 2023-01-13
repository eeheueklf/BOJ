#include <stdio.h>
#include <string>
#include <iostream>
#include <string.h>

using namespace std;

int count;
int recursion(const char *s, int l, int r){
    count ++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);

}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    //ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    string t;

    for(int i=0;i<N;i++){
        count = 0;
        cin >> t;
        cout << isPalindrome(t.c_str()) ; 
        cout << " " << count << "\n"; 
    }
    
    return 0;
}
