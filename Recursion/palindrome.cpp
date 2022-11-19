#include <bits/stdc++.h>
using namespace std;
bool recur(string st, int i)
{
    if (i >= st.size() / 2)
        return true;
    if (st[i] != st[st.size() - i - 1])
        return false;
    return recur(st, i + 1);
}

int main()
{
    string st = "madamm";
    int n = st.size();
    bool ans = recur(st, 0);
    cout << ans << endl;
    if (ans)
        cout << "yes";
    else
        cout << "false";
    return 0;
}
