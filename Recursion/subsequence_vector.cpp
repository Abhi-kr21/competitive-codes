#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void is(vector<int> op, vector<int> ip)
{

    if (ip.size() == 0)
    {
        for (auto it : op)
            cout << it << " ";
        cout << endl;
        return;
    }
    vector<int> op1 = op;
    vector<int> op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin());
    is(op1, ip);
    is(op2, ip);
    return;
}

int main()
{
    vector<int> ip = {3, 1, 2};
    vector<int> op = {};
    is(op, ip);
    return 0;
}
