// Input: s = "the sky is blue"
// Output: "blue is sky the"

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        s += " ";
        vector<string> st;
        string temp = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                temp += s[i];
            }
            else
            {
                st.push_back(temp);
                temp = "";
            }
        }
        string ans = "";
        for (auto it = st.rbegin(); it != st.rend(); it++)
        {
            if (*it != "")
            {
                ans += *it + " ";
            }
        }
        ans.erase(ans.end() - 1);
        return ans;
    }
};
int main()
{
    string s = "";
    string ans = "";
    cout << "enter a string" << endl;
    getline(cin, s);
    Solution ob;
    ans = ob.reverseWords(s);
    cout << ans;
    return 0;
}
// https://leetcode.com/problems/reverse-words-in-a-string/submissions/843403507/