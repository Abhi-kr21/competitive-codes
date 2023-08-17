#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void recur(vector<int> candidates, int target, vector<vector<int>> &ans, vector<int> &ds, int index, int n, int sum)
{
    if (index == n)
    {
        if (sum == target)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << endl;
        }

        return;
    }
    if (candidates[index] <= target && sum < target)
    {
        ds.push_back(candidates[index]);
        sum += candidates[index];
        recur(candidates, target, ans, ds, index, n, sum);
        sum -= candidates[index];
        ds.pop_back();
    }

    recur(candidates, target, ans, ds, index + 1, n, sum);
}

int main()
{
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> ans;
    vector<int> ds;
    int index = 0;
    int n = candidates.size();
    int sum = 0;
    recur(candidates, target, ans, ds, index, n, sum);
}