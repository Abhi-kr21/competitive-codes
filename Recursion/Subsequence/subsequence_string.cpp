#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subsequence(int index, string s, string &ds, int n, vector<string> &ans)
{
    if (index == n)
    {
        for (auto it : ds)
            cout << it << " ";
        cout << endl;
        return;
    }
    ds.push_back(s[index]); // pick the element
    subsequence(index + 1, s, ds, n, ans);
    ds.pop_back();
    subsequence(index + 1, s, ds, n, ans); // not picking the element
}

int main()
{

    string s = "abc";
    int n = s.size();
    vector<string> ans;
    string ds = "";
    subsequence(0, s, ds, n, ans);
    return 0;
}