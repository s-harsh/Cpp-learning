#include<iostream>
#include<iterator>
#include<stack>

using namespace std;

int main()
{
    // Stack ------------------------------------------------------------------------------------>
    /*Stacks are a type of container adaptors with LIFO(Last In First Out)
    type of working, where a new element is added at one end (top) and
    an element is removed from that end only */

    // Declaration ----------------------------------------------------->
    stack<int>st;

    // push -------------------------------------------->
    // Add element
    st.push(1);
    st.push(2);
    st.push(4);
    st.push(7);

    // Emplace ------------------------------------------>
    // Add element
    st.emplace(10);

    // Size --------------------------------------------->
    // Number of element in stack
    cout<<"Elements are = "<<st.size()<<endl;

    // top --------------------------------------------->
    // stack top most element
    cout<< "Top element is = " <<st.top()<<endl;

    // Pop --------------------------------------------->
    // Delete the last entered element 
    st.pop();

    cout<<"After pop top element is = "<<st.top()<<endl;

    // empty -------------------------------------------->
    // Check the stack is empty or not
    cout<<"Is stack is empty = "<<st.empty()<<endl;

    // For clear the whole stack ------------------------>
    while(! st.empty())
    {
        st.pop();
    }
    cout<<"Now Stack is empty or not = "<<st.empty()<<endl;

    if(!st.empty())
    {
        cout<<st.top()<<endl; // --> throw error
        // so must use a check 
    }

        return 0;
}