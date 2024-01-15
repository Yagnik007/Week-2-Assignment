#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    stack<int> s;
    for(auto a: str)
    {
        if(a == '{')
        {
            s.push(1);
        }
        else if(s.size()) { s.pop();}
        else 
        {
            cout<<"Parentheses not balanced"<<endl;
            return 0;
        }
    }
    if(s.size()) cout<<"Parentheses not balanced"<<endl;
    else cout<<"Parentheses balanced"<<endl;
}