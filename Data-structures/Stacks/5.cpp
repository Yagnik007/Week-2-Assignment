#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the string: ";
    string s;
    getline(cin,s);
    stack<char> st;
    for(auto a: s)
    {
        st.push(a);
    }
    s = "";
    while(st.size())
    {
        s+=st.top();
        st.pop();
    }
    cout<<"Reversed string: "<<s<<endl;
    return 0;
}