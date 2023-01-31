#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    while(true)
    {
        bool flag = true;
        char Bracket[100];
        int top=-1;
        string str;
        getline(cin, str);
        if(str==".")
        {
            break;
        }
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='('||str[i]=='[')
            {
                top++;
                Bracket[top] = str[i];
            }
            else if(str[i]==')')
            {
                if(top==-1)
                {
                    flag = false;
                    break;
                }
                else if(Bracket[top]=='(')
                {
                    top--;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else if(str[i]==']')
            {
                if(top==-1)
                {
                    flag = false;
                    break;
                }
                else if(Bracket[top]=='[')
                {
                    top--;
                }
                else{
                    flag = false;
                    break;
                }
            }
        }
        if(flag&&top==-1) cout << "yes\n";
        else cout << "no\n";
    }
 
    return 0;

    
}