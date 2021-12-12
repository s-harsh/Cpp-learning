#include<iostream>
#include<iterator>
#include<map>
#include<unordered_map>
#include<utility>
#include<set>
#include<vector>

using namespace std;

int main()
{
    //map ------------------------------------------------------------------------------------>
    //map has a key and it's corosponding value
    //no two mapped values can be same key
    //it store in a sorted order 
    // tc(time complexity) is log n

    // map creation ------------------------------------------------->
    map<string,int>mpp;

    mpp["harsh"]=1;
    mpp["neha"]=2;
    mpp["seema"]=3;
    mpp["harsh"]=4;


   // ------------------------------------------------------------------------>

    //emplace is slit quicker -------------------------------> 
    mpp.emplace("harsh1",10);
    mpp.emplace("harsh2",100);
    mpp["harsh"]=100;

    // printing map ----------------------------------------->
    cout<<"Map is ------>"<<endl;
    for(auto it:mpp)
    //here it is a pair 
    {
        cout<< it.first <<" "<<it.second<<endl;
    }
    cout<<endl; 

    for(auto it=mpp.begin(); it !=mpp.end(); it++)
    {
        cout<<it->first <<" "<< it->second <<endl;
    }
    cout<<endl;

    //count ------------------------------------------------------>
    //is present it always print 1
    cout<< "Count of harsh = " <<mpp.count("harsh")<<endl;

    //erase ---------------------------------------------------->
    //just give key 
    mpp.erase("harsh");

    mpp.erase(mpp.begin());

    cout<<"Map after erase ------>"<<endl;
    for(auto it:mpp)
    {
        cout<< it.first <<" "<< it.second <<endl;
    }
    cout<<endl;

    // find ----------------------------------------------------->
    auto itr=mpp.find("harsh");

   // cout<< itr <<endl;

    //empty ----------------------------------------------------->
    cout<< "Map is empty = " <<mpp.empty() <<endl;

    //clear ------------------------------------------------------->
    mpp.clear();
    cout<<endl;

    // --------------------------------------------------------------------------->

    // Unordered Map -------------------------------------------------------->
    //doesn't store in any order
    // o(1) in almost all cases
    // o(n) in worst case, where n is the container size

    // ---------------------------------------------------------------------------->

    // Multi map ------------------------------------------------------------->
    multimap<string,int>mpp7;
    mpp7.emplace("harsh",3);
    mpp7.emplace("harsh",4);
    mpp7.emplace("harsh",6);
    mpp7.emplace("hello",10);

    cout<<"Multimap is = "<<endl;
    for(auto it:mpp7)
    {
        cout<< it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
   
    // Pair class ----------------------------------------------------------------->

    /* The pair container is a simple container defined
    in <utility> header file.
    First element is refer ‘first’ & second ‘second’ 
    and order is fix(first,second). */

    //Declaration --------------------------------------------->
    pair<int,int>pr;
    pr.first=1;
    pr.second=2;

    pair <string, double> pair2 ("GeeksForGeeks", 1.23) ;
    cout<< "Pair elmenet = " <<pair2.first<<endl<<endl;

    pair<int, int> pr2 ={1,2};
    cout<< "Pair first element = "<<pr2.first<<endl;


    // Nested pair --------------------------------------------->
    pair< pair<int,int>,int> pr3 ={{1,2},2};
    cout<<"Nested pair [1][2] = "<<pr3.first.second<<endl;

    pair< pair<int,int>,pair<int,int>>pr4={{30,40},{50,60}};
    cout<<"Nested pair [1][1] = "<<pr4.first.first<<endl;
    cout<<"Nested pair [2][2] = "<<pr4.second.second<<endl;

    // pair of vector ------------->
    vector<pair<int,int>>vec;

    // pair of set ---------------->
    set<pair<int,int>>st5;

    // pair of map ---------------->
    map<pair<int,int>,int>mpp3;

    //pair of unordered map ------->
    // unordered_map<pair<int,int>,int>mpp4;  <-xxxxxxxxxxxxxxxxx

    return 0;
}