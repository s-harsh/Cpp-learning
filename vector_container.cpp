#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    // Creating a vector ----------------------------------------------------------------------->

    vector<int>arr; // -> {}
    cout<<arr.size()<<endl;

    //Other Method -----> initiallize vector from some size and value
    vector<int>vec(4,0); //  --> {0,0,0,0}

    cout<<"Vector that initialize with some value - "<<vec.size()<<endl<<endl;

    vector<int>vec1(4,10); // ---> {10,10,10,10}
    vec1.push_back(20);
    vec1.push_back(30);

    cout<<"Printing the 4 size vector contain 10 at all elements"<<endl;
    cout<<"Method one -  \t";

    for(auto it=vec1.begin();it!=vec1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"Method second -\t";
    for(auto it:vec1)
    {
        cout<<it<<" ";
    }
    cout<<endl<<endl;

    //functions in vector ------------------------------------------------------->

    //push_back() --> add element at last position in vector -->
    cout<<"Adding element in array - \n";
    arr.push_back(0); // -> {0}
    cout<<arr.size()<<endl;

    arr.push_back(11); // -> {0,11}
    cout<<arr.size()<<endl;

    arr.push_back(12); // -> {0,11,12}
    cout<<arr.size()<<endl;

    arr.push_back(13); // -> {0,11,12,13}
    cout<<arr.size()<<endl;
    
    //pop_back() ----> remove last element from vector ----> 
    cout<<arr.size()<<endl;
    cout<<"Remove element from array by pop(last element) -"<<endl;
    arr.pop_back();
    cout<<arr.size()<<endl;
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    //clear() --> Clear all elements of vector at once {} -->
    cout<<"Clear the vector -"<<endl;
    arr.clear();
    cout<<arr.size()<<endl;

    //copy a entire or part of vector to another vector --->

    //first type -----> to copy a part or whole vector ---->
    vector<int>vec3(vec1.begin(),vec1.end()-1); 
    // ---> [lower limit,Upper limit +1) 
    for(auto it:vec3)
    {
        cout<<it<<" ";
    }  
    cout<<endl;

    //second type ------> to copy a whole vector ---->
    vector<int> vec4(vec1);
    for(auto it:vec4)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Note~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    //emplace_back() --> emplace_back takes lesser time than push back -->
    vec4.emplace_back(40);
    cout<<vec4.size()<<endl;

    //lower blund , upper bound ---------------------->
    //in dsa

    cout<<"vec is = "<<endl;
    for(auto it:vec)
    {
        cout<<it<<" "; 

    }
    cout<<endl;

    cout<<"vec1 is = "<<endl;
    for(auto it:vec1)
    {
        cout<<it<<" "; 

    }
    cout<<endl;

    cout<<"vec3 is = "<<endl;
    for(auto it:vec3)
    {
        cout<<it<<" "; 

    }
    cout<<endl;

    cout<<"vec4 is = "<<endl;
    for(auto it:vec4)
    {
        cout<<it<<" "; 

    }
    cout<<endl;

    //swap swap the vectors ----------------------------------------->

    swap(vec3,vec4);
    for(auto it:vec3)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    for(auto it:vec4)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // begin , end, rbegin, rend ----------------------------->
    //done

    //size --------------------------------------------------->
    cout<<"Size = "<<vec1.size()<<endl;

    //max_size ----------------------------------------------->
    cout<<"Max size = "<<vec1.max_size()<<endl;

    //capacity ----------------------------------------------->
    cout<<"Capacity = "<<vec1.capacity()<<endl;

    //empty --> Test whether vector is empty ----------------->
    cout<<"Is vector is empty = "<<vec1.empty()<<endl;

    // Reverse------------------------------------------------->
    //Reverses the order of elements in the range [first, last)
    // of any container
    reverse(vec1.begin(),vec1.end());
    for (auto it:vec1)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // 2-D Vectots ------------------------------------------------------------------------>

    cout<<"\n \n2-D Vectors"<<endl;

    vector<vector<int>>vctr;

    vector<int>harsh;
    harsh.push_back(1);
    harsh.push_back(2);
    harsh.push_back(3);

    vector<int>harsh1;
    harsh1.push_back(10);
    harsh1.push_back(20);
    harsh1.push_back(30);

    vector<int>harsh2;
    harsh2.push_back(100);
    harsh2.push_back(200);
    harsh2.push_back(300);

    vctr.push_back(harsh);
    vctr.push_back(harsh1);
    vctr.push_back(harsh2);

    cout<<"Way to print the 2-D vector --------->"<<endl<<endl;
    cout<<"First ----->"<<endl;

    for(auto IT:vctr) 
    // Here 'IT' itself a vector variable of the 'vect' vector 
    {
    // We iterate on 'IT' bcz it's vector of all vector in 'vctr'
        for(auto it:IT) 
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }  
    //cout<<endl;

    cout<<"Second ----->"<<endl;

    for(int i=0;i<vctr.size();i++)
    {
        for(int j=0;j<vctr[i].size();j++)
        {
            cout<<vctr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    cout<<"Value of [2][1] = "<<vctr[2][1]<<endl;
    // cout<<vctr[2]<<endl; 
    //It dosen't run bcz vctr[2] is also a vector so we have
    // to use a loop to print it, see ----------------------->
    cout<<"Print a sub vector vctr[2] in vctr "<<endl;
    for(auto it:vctr[2])
    {
        cout<<it<<" ";
    }
    cout<<endl<<endl;

    cout<<"Define a 10*20 vector with all 0 ---------->"<<endl;
    vector<vector<int>>vec5(10,vector<int>(20,0));
    vec5.push_back(vector<int>(30,0));
    /* we just creata a 2-D vector then as we create vector in 
    1-D as we do in 2-D vector at the sub vector.
    Because we need pre-define vector on that vecotr.
    vector<vector<int>>vector_name(10,vector<int>(20,0)
    (create a vector on sub vector)) */

   for(auto IT:vec5)
    {
        for(auto it:IT)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    } 
    cout<<vec5.size()<<endl;

    cout<<"Create a vector of array -------------->"<<endl;
    // array declaration  = int arr[5];

    vector<int> V[4];
    /* It creata a for size empty array that has a vector data type 🤩.
    By this we can predefine the numbers of vector to be use 🤘 */

    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            V[i].push_back(j);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "Elements at index " << i << ": ";
        for (auto it = V[i].begin();
             it != V[i].end(); it++)
        {
            cout << *it << " ";
        }
        cout<<endl;
    }
    cout<<endl;

    // 10 x 20 x 30 vector --------------------------------->
    vector<vector<vector<int>>>vec6(5,vector<vector<int>>(10,vector<int>(10,0)));

    for(auto it:vec6)
    {
        for(auto IT:it)
        {
            for(auto iterator:IT)
            {
                cout<<iterator<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }


    return 0;
}