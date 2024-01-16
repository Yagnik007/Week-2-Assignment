#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    stack<string> st;
    cout<<"Enter the string: ";
    getline(cin, str);
    string word;
    stringstream ss(str);
    while(ss >> word)
    {
        st.push(word);
    }
    while(st.size())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
