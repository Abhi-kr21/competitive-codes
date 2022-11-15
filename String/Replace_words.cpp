#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string replaceWords(vector<string> &dictionary, string sentence)
    {
        unordered_set<string> set;
        for (auto it : dictionary)
        {
            set.insert(it);
        }
        sentence += " ";
        vector<string> st;
        string temp = "";
        for (int i = 0; i < sentence.size(); i++)
        { // this loop extract each word from sentence and push it in vector
            if (sentence[i] != ' ')
            {
                temp += sentence[i];
            }
            else
            {
                st.push_back(temp);
                temp = "";
            }
        }
        string ans = "";
        for (int i = 0; i < st.size(); i++)
        {
            string w = "";
            string cur = st[i];
            for (char c : cur)
            {
                w += c; // here we are forming the i.e t,th,the this way and checking each word if it is present in the set or not
                if (set.count(w))
                {
                    st[i] = w;
                    break;
                }
            }
            ans += st[i] + " ";
        }
        ans.erase(ans.end() - 1);
        return ans;
    }
};
int main()
{
    int n;
    cout << "size" << endl;
    cin >> n;
    cin.ignore();
    vector<string> dictionary(n);
    string sentence = "";
    cout << " sentence" << endl;
    getline(cin, sentence);
    cout << "dictionary" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> dictionary[i];
    }
    Solution ob;
    string ans = ob.replaceWords(dictionary, sentence);
    cout << ans;
}
// leetcode :https://leetcode.com/problems/replace-words/description/