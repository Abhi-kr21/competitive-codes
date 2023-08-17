#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void subsequence(int index, vector<int> ds, vector<vector<int>> &ans, vector<int> &nums, int n)
{
    if (index == n)
    {
        ans.push_back(ds);
        return;
    }
    ds.push_back(nums[index]); // picking up the the particular index into the subsequence
    subsequence(index + 1, ds, ans, nums, n);
    ds.pop_back();
    subsequence(index + 1, ds, ans, nums, n); //  not picking up the the particular index into the subsequence
}

int main()
{
    vector<int> nums = {3, 1, 2};
    vector<int> ds;
    vector<vector<int>> ans;
    int n = nums.size();
    int index = 0;
    subsequence(index, ds, ans, nums, n);
    for (auto it : ans)
    {
        for (auto x : it)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
