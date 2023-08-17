
#include <bits/stdc++.h>

using namespace std;
void insert(stack<int>&st,int elm){
    if(st.size()==0||st.top()<=elm){
        st.push(elm);
        return;
    }
    int temp=st.top();
    st.pop();
    insert(st,elm);
    st.push(temp);
   
}
void sorty(stack<int>&st){
    if (st.size()==1){
        return;
    }
    int temp=st.top();
    st.pop();
    sorty(st);
    insert(st,temp);
}

int main()
{
    stack<int>st;
    st.push(2);
    st.push(0);
    st.push(5);
    st.push(1);
    sorty(st);
    while(!st.empty()){
    cout<<st.top();
    st.pop();
}
    return 0;
}
