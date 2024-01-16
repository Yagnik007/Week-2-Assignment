#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);
    for(int i=0; i<s.size()/2; i++)
    {
        if(s[i]!=s[s.size()-i-1])
        {
            cout<<"String is not a Palindrome!"<<endl;
            return 0;
        }
    }
    cout<<"String is a Palindrome!"<<endl;
    return 0;
}