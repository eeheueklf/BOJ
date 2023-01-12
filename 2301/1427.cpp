#include <iostream>
#include <cmath>
using namespace std;

void swap(int arr[], int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, len=0, temp = 1, arr[10];
    cin >> N;
    for(int i=0;i<10;i++){
        if(N/temp==0)
            break;
        len++;
        arr[9-i]=N%10;
        N/=10;
    }
    for(int i=10-len;i<10;i++){
        for(int j=i+1;j<10;j++)
            if(arr[i]<arr[j]) swap(arr,i,j);
    } 
    for(int i=10-len;i<10;i++){
        cout << arr[i];
    } 
   
    return 0;
}