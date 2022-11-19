#include <iostream>
using namespace std;

void is(string op, string ip)
{

    if (ip.length() == 0)
    {
        cout << op << endl;
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin());
    is(op1, ip);
    is(op2, ip);
}

int main()
{
    string ip = "abc";
    string op = "";
    is(op, ip);

    return 0;
}
