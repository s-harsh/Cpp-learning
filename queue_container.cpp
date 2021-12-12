#include<iostream>
#include<iterator>
#include<queue>
#include<vector>
#include<functional>
#include<deque>
// for dq we can use itereator
#include<iterator>
#include<utility>


using namespace std;

int main()
{
    // Queue ------------------------------------------------------------------------------>

    /*Queues are a type of container adaptors which operate in a
    first in first out (FIFO) type of arrangement. Elements are 
    inserted at the back (end) and are deleted from the front.*/

    // Declaration ------------------------------------------------->
    queue<int>q;

    // all operation tc is o(1) except deletion

    // push -------------------------------------------->
    // Add element
    q.push(1);
    q.push(3);
    q.push(9);
    q.push(14);

    // front -------------------------------------------->
    // find the top element 
    cout<<"Front element = " <<q.front()<<endl;

    // pop ----------------------------------------------->
    // remove top element
    q.pop();

    cout<<"After pop queue fornt element is = "<<q.front()<<endl;

    // clear the entire queue ------------------------------->
    // tc = o(n) linera time
    while(! q.empty())
    {
        q.pop();
    }

    if(! q.empty())
    {
        cout<<"After clear queue front element = "<<q.front()<<endl;
    }
// ----------------------------------------------------------------------------------------->

    // priority queue ---------------------------------------------------------------------->

    // It store elements in a sorted way &
    // gratest element at front
    // it hasn't front element it has top element
    priority_queue<int>pq;

    pq.push(10);
    pq.push(1);
    pq.push(5);
    pq.push(4);
    pq.push(6);

    cout<<"Priority queue top element is = "<<pq.top()<<endl;

    pq.pop();
    cout<<"After pop top element is = "<<pq.top()<<endl;

    // Change the sequence of storing ----------------->

    priority_queue<int>pq2;
    // give negation of numbers
    pq2.push(-1);
    pq2.push(-3);
    pq2.push(-6);
    pq2.push(-9);

    cout<<"Reverse order top element is = "<< (-1)*pq2.top()<<endl;

    // Minimum priority queue ------------------------->
    priority_queue<int,vector<int>, greater<int>>pq3;
    pq3.push(10);
    pq3.push(1);
    pq3.push(5);
    pq3.push(4);
    pq3.push(6);

    cout<<"Minimum priority queue top element = "<<pq3.top()<<endl;

    

    // pair of priority queue -------------------------------->
    priority_queue<pair<int,int>>pq1;
    pq1.push(make_pair(1,5));
    pq1.push(make_pair(1,3));
    pq1.push(make_pair(1,7));
    pq1.push(make_pair(2,1));
    pq1.push(make_pair(2,3));

   cout<< "Top element = "<< pq1.top().first <<endl;

    cout<<"Priority queue of pair ----> "<<endl;
   while(!pq1.empty())
   {
       cout<<pq1.top().first<<" "<<pq1.top().second<<endl;
       pq1.pop();
   } 
   cout<<endl;

    // Pair of miminum priprity queue ---------------------------->
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq4;
    pq4.push(make_pair(10,200));
    pq4.push(make_pair(10,300));
    pq4.push(make_pair(10,400));
    pq4.push(make_pair(20,100));

    cout<<"Min priority queue ---->"<<endl;
    while(!pq4.empty())
    {
        cout<<pq4.top().first<<" "<<pq4.top().second<<endl;
        pq4.pop();
    }
    cout<<endl;


    // -------------------------------------------------------------------------------------->

    // Double ended queue -------------------------------------------------->
    // it is sequence container with dyanmic size
    //can be expanded or contracted on both ends
    // it is similar to vector & better to it
    // only this queue gives iterator
    // Declaration --------------------------------------------------------->
    deque<int>dq;

    // push_back() --------------------------------------------->
    for(int i=0;i<5;i++)
    {
        dq.push_back(i*10);
    }

    dq[4]=50;
    // we don't use this asignment to add new element 
    // it is for update

    cout<<"Deque is = ";
    for(auto it:dq)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // size -------------------------------------------------->
    cout<<"Size is = "<<dq.size()<<endl;

    // max_size ---------------------------------------------->
    cout<<"Max size is = "<<dq.max_size()<<endl;

    // empty ------------------------------------------------>
    cout<<"Check the deque is empty = "<< dq.empty()<<endl;

    // front ------------------------------------------------>
    cout<<"first element is = "<< dq.front()<<endl;

    // back ------------------------------------------------->
    cout<<"last element is = "<<dq.back()<<endl;

    // at --------------------------------------------------->
    cout<<"Element at 3 = "<<dq.at(3)<<endl;

    // [] access -------------------------------------------->
    //  if element is not exist then random number will print
    cout<<"Element at [4] = "<<dq[4]<<endl;
    

    // push_front() ----------------------------------------->
    dq.push_front(1);
    cout<<"deque after push-front(1) = ";
    for(auto it:dq)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // insert ---------------------------------------------->
    dq.insert(dq.begin(),60);
    for(auto it:dq)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // erase ----------------------------------------------->
    dq.erase(dq.begin());
    for(auto it:dq)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // swap ------------------------------------------------>
    deque<int>dq1;
    for(int i=0;i<5;i++) dq1.push_back(i*2);

    dq.swap(dq1);

    cout<<"first queue is = ";
    for(auto it:dq) cout<<it<<" ";
    cout<<endl;

    for(auto it:dq1) cout<<it<<" ";
    cout<<endl;

    // emplace --------------------------------------------->
    dq1.emplace(dq1.begin(),100);
    dq1.emplace_back(70);
    dq1.emplace_front(-1);

    for(auto it:dq1) cout<<it<<" ";
    cout<<endl;

    // clear ------------------------------------------------>
    dq1.clear();
    cout<<"After clear dq = ";
    for(auto it:dq1)
    {
        cout<<it <<" ";
    }
    cout<<endl;

    return 0;
}