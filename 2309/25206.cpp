#include <iostream>
using namespace std;

int main(){

    string s, grade;
    float credit, credit_sum = 0.0, cc;
    for(int i=0;i<20;i++){
        cin >> s >> credit >> grade;

        if(grade == "A+") credit_sum+=(4.5*credit);
        else if(grade == "A0") credit_sum+=(4.0*credit);
        else if(grade == "B+") credit_sum+=(3.5*credit);
        else if(grade == "B0") credit_sum+=(3.0*credit);
        else if(grade == "C+") credit_sum+=(2.5*credit);
        else if(grade == "C0") credit_sum+=(2.0*credit);
        else if(grade == "D+") credit_sum+=(1.5*credit);
        else if(grade == "D0") credit_sum+=(1.0*credit);
        else if(grade == "F") credit_sum+=0.0;
        if(grade[0] != 'P')
            cc+=credit;

    }
    cout << credit_sum/cc;

    return 0;
}