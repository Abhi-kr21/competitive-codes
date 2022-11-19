#include <iostream>
using namespace std;

void is(string op, string ip)
{

    if (ip.length() == 0) // base condition
    {
        cout << op << endl;
        return;
    }
    string op1 = op; // here we are making the choice for not taking the element
    string op2 = op;
    op2.push_back(ip[0]); // here we are making choice that the element should be included
    ip.erase(ip.begin()); // here we are making the input small
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
