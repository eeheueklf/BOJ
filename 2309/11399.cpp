#include <iostream>

using namespace std;

void quick_sort(int *data, int start, int end){
    if(start>= end){
        return;
    }

    int pivot = start, j = end;
    int i = pivot + 1;
    int temp;

    while(i<=j){
        while(i<=end&&data[i]<=data[pivot]){
            i++;
        }
        while(j>start&&data[j]>=data[pivot]){
            j--;
        }
        if(i>j){
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        }else{
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }
    quick_sort(data, start, j-1);
    quick_sort(data, j+1, end);
}

int main(){
    int N, pi, time = 0;
    int person[1001];

    cin >> N;
    for (int i=0;i<N;i++){
        cin >> pi;
        person[i] = pi;
    }
    quick_sort(person, 0, N-1);
    for (int i=0;i<N;i++){
        time += (person[i] * (N-i));
    }
    cout << time;
}