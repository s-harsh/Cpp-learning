#include<iostream>
#include<array>
#include<bits\stdc++.h>
using namespace std;

namespace harsh
{
    int var=50;
}

int main()
{
    double var=10.2;
    cout<<"STD namespace var is = "<<var<<endl;
    cout<<"harsh namespace var is = "<<harsh::var<<endl;


    //array<int,5>arr{{1,2,3}};
    array<int,5>arr={10,20,30,40};
    array<int,4>arr1={1,2,3,4};

    // arr.swap(arr1);
    //swap(arr,arr1);

    /*cout<<"First array is -"<<endl;
    for(int i =0;i<=10;i++)
    {
        cout<<arr[i]<<" ";
    }*/

    cout<<endl<<endl;

    cout<<"Second array is -"<<endl;
    for(int i =0;i<=40;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    /* Iterators in array -------------------------------------------------------------->
    begin()  - Point to array index 0
    end()    - Point to the address right after the last element 
    rebegin()- Reversr the begin so points to the last element n-1
    rend()   - Reverse the end so point to the address right before the first element */

    set<string> st;
    st.insert({ "geeks", "for", "geeks", "org" });
 
    // 'it' evaluates to iterator to set of string
    // type automatically
    for (auto it = st.begin(); it != st.end(); it++)
        cout << *it << " ";

    cout<<endl;

    array<int, 5> arr2 = {1,2, 3, 4, 5}; 

	for(auto it =arr2.begin(); it!= arr2.end(); it++) 
    {
		cout << *it << " "; 
	}
    cout<<endl;

    for(auto it=arr2.rbegin();it!=arr2.rend();it++) 
//we don't use it-- because it's reverse iterator, so it automatically moves in reverse direction
    {
        cout << *it << " ";    
    }
    cout<<endl;
    
    for(auto it= arr2.end(); it>= arr2.begin(); it--) 
    {
		cout << *it << " "; 
	}
    cout<<endl;

    //for each loop
    for (auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    string s="harsh";
    for(auto c:s)
    {
        cout<<c<<" ";
    }

    //Functins ----------------------------------------------------------------------------------->
    
    //print the size of array ->

    cout<<"Number of elements in arrays are -"<<endl;
    cout<<arr.size()<<endl;
    cout<<arr1.size()<<endl;

    //print first elements ->

    cout<<"First elements in arrays are - "<<endl;
    cout<<arr.front()<<"\t"<<arr.at(0)<<endl;
    cout<<arr1.front()<<"\t"<<arr1.at(0)<<endl;

    //Print last(back) element ->

    cout<<"Last elements in arrays are - "<<endl;
    cout<<arr.back()<<"\t"<<arr.at(arr1.size()-1)<<endl;
    cout<<arr1.back()<<"\t"<<arr1.at(arr1.size()-1)<<endl;

    //Max size of perticular array ->
    cout<<"Max size of a peticular array is -"<<endl;
    cout<<arr.max_size()<<endl;
    cout<<arr1.max_size()<<endl;

    //Test whether array is empty ->
    cout<<"Bool return true in array is empty"<<endl;
    cout<<arr.empty()<<endl;
    cout<<arr1.empty()<<endl;

    //Fill array with value ->
    //arr.fill(4)     //is will not wrok, it isn't a array container
    arr1.fill(5);  //{5,5,5}

 return 0;
}