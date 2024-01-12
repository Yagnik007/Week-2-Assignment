#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
            return mid;
        if (nums[l] <= nums[mid])
        {
            if (target >= nums[l] and target < nums[mid])
            {
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        else if (nums[r] >= nums[mid])
        {
            if (target <= nums[r] and target > nums[mid])
            {
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    vector<int> v(n);
    cout<<"Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int id = search(v,key);
    if(id != -1) cout<<"Key found at: "<<id<<endl;
    else cout<<"Key not found"<<endl;
}