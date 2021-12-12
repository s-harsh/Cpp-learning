#include<iostream>
#include<set>
#include<iterator>
#include<unordered_set>
//#include<bits/stdc++.h>

using namespace std;

int main()
{

    /*The set stores the elements in sorted order.
    All the elements in a set have unique values.
    The value of the element cannot be modified once it is added to the set, though it is possible
    to remove and then add the modified value of that element.
    Thus, the values are immutable.
    Sets follow the Binary search tree implementation.
    The values in a set are unindexed. */

    // int arr[5]={2,3,4,1,2};
    // Creating a set ------------------------------------------------------------------------------->

    // defining an empty set -------> 
    set<int>val; 

    //set with value --------------->
    set<int>st={10,30,40,50,1,3,4};

    cout<<"set is = ";
    for(auto itr= st.begin(); itr != st.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;

    //copy a set to another --------->
    set<int>st1(st.begin(),st.end());
    cout<<"Copy set of st is = ";
    for(auto it=st.begin();it !=st.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // --------------------------------------------------------------------------------------------------->

    //Functions ------------------------------------------------------------------------------------------>

    //Erase ---------------------------------------------->
    // Removes either a single element / range of elements [first,last)
    //time complexcity - log n ------------------------->
    st.erase(st.begin());

    //time complexcity - log n ------------------------->
    auto end_it= st.find(4);
    cout<<"Range erase = ";
    st.erase(st.begin(),end_it);

    //we put element not index number to erase --------->
    st.erase(30);

    for(auto itr= st.begin(); itr != st.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;

    // find ------------------------------------------------>  
    //Searches for an element and returns an iterator(index) 
    // if found otherwise it returns an iterator to set::end.

    auto it=st.find(100);
    cout<<"Iterator is = "<<*it <<endl;

    auto it1=st.find(4);
    cout<<"Iterator is = "<<*it1 <<endl;

    // emplace - to insert element,it is faster then insert ->
    st.emplace(70);
    for(auto itr=st.begin();itr !=st.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;

    //size - number of elements ----------------------------->
    cout<<"Set is =";
    for(auto it:st)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<st.size() <<endl;

    //empty -check set is empyty or not ---------------------->
    cout<<"Is set is empty = "<<st.empty()<<endl;

    //max size ------------------------------------------------>
    cout<<"Max elements that set can hold = "<<st.max_size()<<endl;

    //swap ------------------------------------------------------->
    cout<<"Set 1 = ";
    for(auto it:st)
    {
        cout<<it<<" ";
    }
    cout<<"\nSet 2 = ";
    for(auto it:st1)
    {
        cout<< it <<" ";
    }
    cout<<endl;

    st.swap(st1);
    
    cout<<"Ater sawp-"<<endl;

    cout<<"Set 1 = ";
    for(auto it:st)
    {
        cout<<it<<" ";
    }
    cout<<"\nSet 2 = ";
    for(auto it:st1)
    {
        cout<< it <<" ";
    }
    cout<<endl;

    //clear -------------------------------------------------->
    st.clear();
    cout<<"Remove all elemets = "<< st.size()<<endl;

    st.emplace_hint(st.end(),3);
    for(auto it:st)
    {
        cout<< it <<" ";
    }
    cout<<endl;

    // emplace_hint --------------------------------------------->
    // Doubt

    // key_comp ------------------------------------------------->
    // Doubt

    // value_comp ----------------------------------------------->
    // Doubt

    //count ----------------------------------------------------->
    //check give element is present or not
    cout<< "3 is present in set = " <<st.count(3)<<endl;
    cout<<"4 is present in set = "<<st.count(4)<<endl;

    //lower_bound ----------------------------------------------->
    // Doubt

    //upper _bound ----------------------------------------------->
    // Doubt

    // equal_range ----------------------------------------------->
    // Doubt

    //get_allocator ----------------------------------------------->
    // Doubt

    // -------------------------------------------------------------------------------------------------------->

    // Unordered set --------------------------------------------------------------------->
    //average time complexity is 0(1)
    //tle -> switch to set
    //but the worst case is linear in nature, 0(set size)
    //store unique & no particular order,
    // it allow for fast retrieval of individual elements
    unordered_set<int>st2;
    st2.insert(1);
    st2.insert(5);
    st2.insert(3);

    cout<<"Unordered set = ";
    for(auto it:st2)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // Multiset ---------------------------------------------------------------------------------->
    //multiset gives option to store all element in sorted fashion

    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(3);
    ms.insert(5);
    ms.insert(5);
    ms.insert(6);

    cout<<"Multiset = ";
    for(auto it:ms)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    ms.erase(3);
    //all the instances  will be erased

    cout<<"Multiset after erase 3 = ";
    for(auto it:ms)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    auto itr=ms.find(1); 
    //return iterator pointing to the first element of 1 
    cout<< *itr<<endl;

    cout<< "count 5 = "<<ms.count(5)<<endl;

    
    ms.erase(ms.find(5));
    cout<<ms.size() <<endl;


    ms.clear();
    cout<<"Multiset after clear = ";
    for(auto it:ms)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<ms.size()<<endl;

    return 0;
}