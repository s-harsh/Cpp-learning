#include<iostream>
#include<list>
#include<iterator>

using namespace std;

int main()
{
    // list ---------------------------------------------------------------------------->
    /* Lists are sequence containers that allow non-contiguous
    memory allocation. As compared to vector, list has slow
    traversal, but once a position has been found,
    insertion and deletion are quick.

    it allow constant time insert and erase operations anywhere
     within the sequence.
      */

    // Declaration --------------------------------------------------->
    list<int>ls;

    // push_front ------------------------------------------->
    // add element at beginning
    ls.push_front(3);
    ls.push_front(4);
    ls.push_front(10);
    ls.push_front(2);

    cout<<"List = ";
    for(auto it:ls) cout<<it<<" ";
    cout<<endl;

    // remove ----------------------------------------------->
    // remove element with specific value -> tc= o(1)
    ls.remove(2);
    cout<<"Remove 2 then list = ";
    for(auto it:ls) cout<<it<<" ";
    cout<<endl;

    ls.remove(100);
    cout<<"If we remove element that don't exist =";
    for(auto it:ls) cout<<it<<" ";
    cout<<endl;

    // assign ----------------------------------------------->
    // Assign a list with a specific value
    ls.assign(11,5);
    ls.insert(ls.begin(),1);
    ls.push_front(3);
    ls.push_back(9);
    for(auto it:ls) cout<<it<<" ";
    cout<<endl;

    // size ------------------------------------------------->
    cout<< "Size = " << ls.size()<<endl;

    // empty ------------------------------------------------>
    list<int>ls1;
    cout<<"Empty list ls1 check = "<<ls1.empty()<<endl;

    // max_size --------------------------------------------->
    cout<<"Max size = "<<ls.max_size()<<endl;

    // front ------------------------------------------------->
    cout<<"Front element = "<<ls.front()<<endl;
    
    // back --------------------------------------------------->
    cout<<"Back element = "<<ls.back()<<endl;

    // emplace ------------------------------------------------->
    ls.emplace(ls.begin(),0);
    cout<<"list after emplace 0 at begin = ";
    for(auto it:ls) cout<<it<<" ";
    cout<<endl;

    // emplace_front ------------------------------------------->
    ls.emplace_front(100);
    cout<<"list = ";
    for(auto it:ls)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // emplace back ------------------------------------------------->
    ls.emplace_back(101);
    cout<<"list = ";
    for(auto it:ls) cout<<it<<" ";
    cout<<endl;

    list<int>ls2(ls);
    cout<<"New list  = ";
    for(auto it:ls) cout<<it<<" ";

    cout<<endl;

    // erase --------------------------------------------------------->
    ls.erase(ls.begin());
    cout<<"list = ";
    for(auto it:ls) cout<<it<<" ";
    cout<<endl;


    // Declaration of iterator of list ~~~~~~>
    //list<int>::iterator start_it=ls.begin();
    auto start_it=ls.begin();
    start_it++;
    start_it++;

    //list<int>::iterator end_it=ls.end();
    auto end_it=ls.end();
    end_it--;
    end_it--; 
    ls.erase(start_it,end_it);
    cout<<"list = ";
    for(auto it:ls) cout<<it<<" ";
    cout<<endl;

    // swap --------------------------------------------------------->
    ls.swap(ls1);
    cout<<"After swap "<<endl;
    cout<<"list 1 = ";
    for(auto it:ls) cout<<it<<" ";
    cout<<endl;
    cout<<"list 2 = ";
    for(auto it:ls1) cout<<it<<" ";
    cout<<endl;

    // clear -------------------------------------------------------->
    ls.clear();
    cout<<"list after clear = ";
    for(auto it:ls) cout<<it<<" ";
    cout<<endl;

    // reverse --------------------------------------------------------->
    ls1.reverse();
    cout<<"Reverse order list = ";
    for(auto it:ls1) cout<<it<<" ";
    cout<<endl;

    // sort ------------------------------------------------------------->
    ls1.sort();
    cout<<"Sort the list = ";
    for(auto it:ls1) cout<<it<<" ";
    cout<<endl;

    return 0;
}