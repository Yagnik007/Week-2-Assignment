#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    stack<string> st;
    stringstream str(s);
    string word;
    while(str >> word)
    {
        st.push(word);
    }
    s = "";
    while(st.size())
    {
        s+=(st.top());
        st.pop();
        s+=" ";
    }
    cout<<s<<endl;
}