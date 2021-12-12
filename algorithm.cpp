#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
#include<limits.h>
#include<numeric>
#include<iterator>
#include<string>

using namespace std;

int main()
{
    // algo --------------------------------------------------------------------->
    /*1. sort(first_iterator, last_iterator) – To sort given vector.
    2. reverse(first_iterator, last_iterator) – To reverse a vector.
    3. *max_element (first_iterator, last_iterator) – To find the
            maximum element of a vector.
    4. *min_element (first_iterator, last_iterator) – To find the 
            minimum element of a vector.
    5. accumulate(first_iterator, last_iterator, initial sum) –
     Does the summation of vector elements 
    6. count(first_iterator, last_iterator,x) – To count the
    occurrences of x in vector.
    7. find(first_iterator, last_iterator, x) – Returns an 
    iterator to the first occurence of x in vector and 
    points to last address of vector.
    8. binary_search(first_iterator, last_iterator, x) – Tests
    whether x exists in sorted vector or not.
     */

    // sort algo ---------------------------------------------------->
    /* It generally takes two parameters,first the point
    of the array/vector from where the sorting needs to
    begin and the second parameter being the length up
    to which we want the array/vector to get sorted.
    The third parameter is optional and can be used in 
    cases such as if we want to sort the elements in part.
    
    tc= c log n  */

    // sort a array --------------------------------------------->
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n); // limit is --> [)
    cout<<"Array in ascending order = ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    
    // Doubt ->in greater 
    sort(arr,arr+n,greater<int>()); // limit is --> [)
    cout<<"Array in descending order = ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl; 

    // sort a vector --------------------------------------->
    vector<int>vec;
    for(int i=1;i<=5;i++) vec.push_back(i);

   cout<<"Vector ascending order = ";
    sort(vec.begin(),vec.end());  // limit is --> [)
    for(auto it:vec) cout<<it<<" ";
    cout<<endl;

    cout<<"Vector descending order = ";
    sort(vec.begin(),vec.end(),greater<int>());  // limit is --> [)
    for(auto it:vec) cout<<it<<" ";
    cout<<endl;

    cout<<"Vector sort of [1,3)= ";
    sort(vec.begin()+1,vec.begin()+4);
    for(auto it:vec) cout<<it<<" ";
    cout<<endl;

    // reverse ---------------------------------------------------->
    // reverse the order 
    // for array and as well vector
    reverse(vec.begin(),vec.end());
    cout<<"Reverser vector  = ";
    for(auto it:vec) cout<<it<<" ";
    cout<<endl;

    reverse(arr,arr+3);
    cout<<"Reverse array [0,3) = ";
    for(int i= 0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;

    // Max & Min -------------------------------------------------->
    // find the max in a given range
    // without built-in function -->
    int maxi=INT_MIN;
    for(int k=1;k<=3;k++)
    {
        if(arr[k]>maxi) maxi=arr[k];
    }
    cout<<"Max in [0,3] = "<<maxi<<endl;

    int max=*max_element(arr,arr+n);
    cout<<"Array max = "<<max<<"  at "<<max_element(arr,arr+n)<<endl;
    int min=*min_element(arr,arr+n);
    cout<<"Array min = "<<min<<" at "<<min_element(arr,arr+n)<<endl;

    int max1=*max_element(vec.begin(),vec.begin()+4);
    cout<<"Vector max= "<<max1<<endl;
    int min1=*min_element(vec.begin(),vec.begin()+4);
    cout<<"Vector min = "<<min1<<endl;

    // sum ----------------------------------------------------------->
    // without function
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum of array = "<<sum<<endl;

    // with accumulate function
    //vector= {1,4,3,2,5}
    int sum1= accumulate(vec.begin(),vec.begin()+3,0);
    // limit is =[]  ----------------------------------> 
    cout<<"Sum of vector = "<<sum1<<endl;

    // find the frequency ---------------------------------------------->
    cout<<"1 occurs = ";
    int count2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count2++;
        }
    }
    cout<<count2<<" times"<<endl;

    // count function ---------------------------------------------------->
    // return number of occurrences of element in a range
    // Limit -> [)
    // tc= o(n)
    // header file - algorithm
    int count1=count(arr,arr+n,2);
    cout<<"2 occure = "<<count1<<" times "<<endl;

    // find function ---------------------------------------------------->
    // return the iterator pointing to the first 
    // occurance, or else it return pointing to
    //the end() if is not there
    cout<<"Array = ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    int ind=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==2)
        {
            ind=i;
            break;
        }
    }
    cout<<"2 first occurs at = "<<ind<<endl;

    auto ind1= find(arr,arr+n,2);
    cout<<"2 first occurs at = "<<ind1- arr<<endl;

    cout<<"Vector = ";
    for(auto it:vec) cout<<it<<" ";
    cout<<endl;

    auto ind2= find(vec.begin(),vec.end(),2);
    cout<<"2 first occurs at = "<<ind2- vec.begin()<<endl;

    auto ind3=find(vec.begin(),vec.end(),6);
    if(ind3==vec.end())
    {
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"index = "<<ind3-vec.begin()<<endl;
    }

    // binary serach ----------------------------------------------->
    // only use after sort 
    // tc= log n 

    bool res= binary_search(arr,arr+n,8);
    cout<<"8 is present in array "<<res<<endl;

    bool res1= binary_search(vec.begin(),vec.begin()+4,5);
    cout<<"5 is present in vector "<<res<<endl;

    // lower_bound ---------------------------------------------->
    // return an iterator pointing to first element
    //which is not less than x 

    auto it = lower_bound(arr,arr+n,4);
    auto ind4=it-arr;
    cout<<"lower bound of 4 in array = "<<ind4<<" "<<*it<<endl;

    auto itr= lower_bound(vec.begin(),vec.end(),3);
    auto ind5= itr-vec.begin();
    cout<<"lower bound of 3 in vector = "<<ind5<<" "<<*itr<<endl;

    // upper bound ----------------------------------------------->
    // return an iterator pointing to an element 
    //which is just greater than x

    auto it1= upper_bound(arr,arr+n,4);
    auto ind6=it1-arr;
    cout<<"upper bound of 4 in array = "<<ind6<<" "<<*it1<<endl;

    auto itr1=upper_bound(vec.begin(),vec.end(),3);
    auto ind7=itr1-vec.begin();
    cout<<"Upper bound of 3 in vector = "<<ind7<<" "<<*itr1<<endl; 


    // question ---------------------------------------------------------------->

    // find the last occurance of x  ----------------------------->
    // arr[]= {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12}
    //index=  0   1  2  3  4  5   6   7    8   9  10
    //ast occurance of x=10, ans 7th index l
    // last occurance of x=6, not exist
    // last occurance of x=0, not exist

    int ind8=upper_bound(arr,arr+n,4)-arr;
    ind8 -=1;
    if(ind8>0 && arr[ind8]==4)
    {
        cout<<"last occurance of 4 = "<<ind8<<endl;
    }
    else{
        cout<<"Not exist "<<endl;
    }

    // tell the number of times the x apperan  ---------------------->
    // arr[]= {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12}
    //index=  0   1  2  3  4  5   6   7    8   9  10
    // x=10  ans= 3
    // x=7   ans= 2

    int num1=upper_bound(arr,arr+n,4)-lower_bound(arr,arr+n,4);
    // for 4 upper bound- lower bound
    cout<<"4 apperea "<<num1<<" times"<<endl;

    //next_permutation --------------------------------------------------->
    // total permutation = n!
    // string s ="abc"
    // all permutation
    // abc  acb  bac  bca  cab  cba

    string s="bca";
    bool res2= next_permutation(s.begin(),s.end());
    // now string goes to next permutation of it
    // so s ="cab"

    cout<<"Next permutation of bca exist = "<<res2<<endl;

    // print all possible permutations -->
    // it's tc is higher 
    // so in interview we use recursion
    string s1="bca";
    cout<<"Possible permutations are - "<<endl;
    sort(s1.begin(),s1.end());
    do
    {
        /* code */
        cout<<s1<<endl;
    } while (/* condition */next_permutation(s1.begin(),s1.end()));

    // for array -->
    int arr2[]={4,5,6};
    cout<<"Possible permutations are - "<<endl;
    sort(arr2,arr2+3);
    do
    {
        /* code */
        for(int i=0;i<3;i++) cout<<arr2[i];
        cout<<endl;
    } while (/* condition */next_permutation(arr2,arr2+3));
    
    // prev permutation --------------------------------------------->
    bool res4=prev_permutation(arr,arr+n,s);
    cout<<"Prev permutation of bca exist = "<<res4<<endl;







    return 0;
}