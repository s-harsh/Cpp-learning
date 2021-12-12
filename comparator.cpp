#include<iostream>
#include<utility>
#include<algorithm>

using namespace std;
bool comp(int el1,int el2)
{
    if(el1<el2) return true;

    else false;
}
bool que(pair<int,int>e1,pair<int,int>e2)
{
    if(e1.first<e2.first) true;

    if(e1.second>e2.second) true;

    return false;
}
int main()
{
    // comarator ------------------------------------------------->
    /* Comparator Classes are used to compare the
     objects of user-defined classes*/
     // bool type function

    // que
    // sort pair in ascending order if first element 
    // is same then sort then reverse

    int arr1[5]={1,3,2,4,5};
    sort(arr1,arr1+5,comp);
    for(int i=0;i<5;i++) cout<<arr1[i]<<" ";
    cout<<endl;

    pair<int,int>arr[3]={{1,4},{5,2},{5,8}};

    return 0;
}