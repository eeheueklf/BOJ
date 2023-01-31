#include <iostream>

using namespace std;
const int defMaxSize = 10000; 

class Stack{
public:
    Stack(int maxNumber = defMaxSize);
    ~Stack();
    void push(int data);
    int pop();
    void gettop();
    void empty();
    void getsize();
private:
    int top, maxSize, size;
    int* dataItems;
};

Stack::Stack(int maxNumber){
    maxSize = maxNumber;
    size = 0;
    top = -1;
    dataItems= new int[maxSize];
}

Stack::~Stack(){
    delete[] dataItems;
}

void Stack::push(int data){
    size++;
    top++;
    dataItems[top] = data;
}

int Stack::pop()
{
    if (size == 0){
        return -1;
    }
    else{
        int temp;
        temp = dataItems[top];
        top = top - 1;
        size = size - 1;
        return temp;
    }
}

void Stack::gettop(){
    if(size==0) cout << "-1";
    else cout << dataItems[top];
}

void Stack::empty(){
    if(size == 0)   cout << "1";
    else            cout << "0";
}

void Stack::getsize(){
    cout << size;
}

int main(){
    int N, iCnt, data;
    string cmd;
    Stack testcase;
    cin >> N;

    for(iCnt=0;iCnt<N;iCnt++)
    {
        cin >> cmd;
        if(cmd == "push")
        {
            cin >> data;
            testcase.push(data);
        }
        else if(cmd == "pop")
        {
            cout << testcase.pop() << "\n";
        }
        else if(cmd == "size")
        {
            testcase.getsize();
            cout << "\n";
        }
        else if(cmd == "empty")
        {
            testcase.empty();
            cout << "\n";
        }
        else if(cmd == "top")
        {
            testcase.gettop();
            cout << "\n";
        }
        else
        {
            cout << "Wrong Cmd.\n";
        }

    }
}