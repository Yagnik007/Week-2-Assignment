#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    unordered_map<int,int> m;
    for(auto a: s) m[a]++;
    for(auto a: s)
    {
        if(m[a] == 1)
        {
            cout<<"First non-repeating character is: "<<a<<endl;
            return 0;
        }
    }
    cout<<"No non-repeating character"<<endl;
}