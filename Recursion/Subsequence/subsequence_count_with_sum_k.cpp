#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subsequence(int index, vector<int> &nums, int n, int target, int sum)
{
    if (index == n)
    {
        if (sum == target)
        {
            return 1;
        }
        return 0;
    }
    sum += nums[index];
    int l = subsequence(index + 1, nums, n, target, sum);
    sum -= nums[index];
    int r = subsequence(index + 1, nums, n, target, sum);
    return l + r;
}

int main()
{
    vector<int> nums = {1, 2, 1};
    int target = 2;

    int n = nums.size();
    int index = 0;
    int sum = 0;

    int count = subsequence(index, nums, n, target, sum);
    cout << count;
}