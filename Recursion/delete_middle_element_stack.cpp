
#include <bits/stdc++.h>
using namespace std;
void delet(stack<int>&st,int k){
    if(st.size()==k){
        st.pop();
        return;
    }
    int top=st.top();
    st.pop();
    delet(st,k);
    st.push(top);
}


int main()
{
    stack<int>st;
    st.push(2);
    st.push(0);
    st.push(5);
    st.push(1);
    st.push(4);
    st.push(6);
    int k=(st.size()/2)+1;
    delet(st,k);
    while(!st.empty()){
    cout<<st.top();
    st.pop();
}
    return 0;
}
