#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subsequence(int index, vector<int> ds, vector<vector<int>> &ans, vector<int> &nums, int n, int target, int sum)
{
    if (index == n)
    {
        if (sum == target)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << "\n";
        }
        return;
    }
    ds.push_back(nums[index]);
    sum += nums[index];
    subsequence(index + 1, ds, ans, nums, n, target, sum);
    sum -= nums[index];
    ds.pop_back();
    subsequence(index + 1, ds, ans, nums, n, target, sum);
}

int main()
{
    vector<int> nums = {1, 2, 1};
    int target = 2;
    vector<int> ds;
    vector<vector<int>> ans;
    int n = nums.size();
    int index = 0;
    int sum = 0;

    subsequence(index, ds, ans, nums, n, target, sum);
}