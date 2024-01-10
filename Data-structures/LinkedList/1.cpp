#include <bits/stdc++.h>
using namespace std;

void insertInList(list<int> &li)
{
    int pos, num;
    cout<<"Enter the position: ";
    cin>>pos;
    cout<<"Enter the number to be inserted: ";
    cin>>num;
    li.insert(pos, num);
}

void deleteRange(list<int> &li)
{
    list<int>::iterator beg,en;
    cout<<"Enter beginning and ending Iterator: "<<endl;
    cin>>beg;
    cin>>en;
    li.erase(beg,en);
}
void traverse(list<int> &li)
{
    for(auto a: li)
    {
        cout<<a<<" ";
    }
}

int main()
{
	list<int> li;

	for (int i = 0; i < 10; ++i) {
		li.push_back(i * 2);
	}
    insertInList(li);
    deleteRange(li);
    traverse(li);
	return 0;
}
