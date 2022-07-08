#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

void deleteMid(stack<int> &st, int n, int count)
{
    if (count == n / 2)
    {
        st.pop();
        return;
    }
    int ele = st.top();
    st.pop();
    deleteMid(st, n, count + 1);
    st.push(ele);
}

void printStack(stack<int> st)
{
    if(st.empty())
    {
        return;
    }
    int ele = st.top();
    st.pop();
    printStack(st);
    cout<<ele<<" ";
    st.push(ele);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    printStack(st);
    cout<<endl;
    deleteMid(st,st.size(),0);
    printStack(st);
    cout<<endl;
    return 0;
}