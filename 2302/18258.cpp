#include <iostream>

using namespace std;
const int defMaxSize = 2000000; 

class Queue{
public:
    Queue(int maxNumber = defMaxSize);
    ~Queue();
    void push(int data);
    void pop();
    void size();
    void empty();
    void getFront();
    void getBack();
private:
    int front, back;
    int* dataItems;
};

Queue::Queue(int maxNumber){
    front = -1;
    back = -1;
    dataItems= new int[maxNumber];
}

Queue::~Queue(){
    delete[] dataItems;
}

void Queue::push(int data){
    if(front==-1) front = 0;
    back++;
    dataItems[back] = data;
}

void Queue::pop()
{
    if (front == -1)
        cout << -1 << "\n";
    else if(front==back){
        cout << dataItems[front] << "\n";
        front = -1; back = -1;
    }
    else{
        cout << dataItems[front] << "\n";
        front++;
    }
}

void Queue::size(){
    if(front==-1) cout << "0\n";
    else cout << back - front + 1 << "\n";
}

void Queue::empty(){
    if(front == -1)   cout << "1\n";
    else            cout << "0\n";
}

void Queue::getFront(){
    if(front==-1) cout << "-1\n";
    else cout << dataItems[front] << "\n";
}

void Queue::getBack(){
    if(front==-1) cout << "-1\n";
    else cout << dataItems[back] << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, iCnt, data;
    string cmd;
    Queue testcase;
    cin >> N;

    for(iCnt=0;iCnt<N;iCnt++)
    {
        cin >> cmd;
        if(cmd == "push")
        {
            cin >> data;
            testcase.push(data);
        }
        else if(cmd == "pop") testcase.pop();
        else if(cmd == "size") testcase.size();
        else if(cmd == "empty") testcase.empty();
        else if(cmd == "front") testcase.getFront();
        else if(cmd == "back") testcase.getBack();
    }
}