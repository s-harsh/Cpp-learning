#include<iostream>
#include<bitset>

using namespace std;

int main()
{
    // Bitset ------------------------------------------------------------------------>
    
    /*A bitset is an array of bool but each Boolean
    value is not stored separately instead bitset 
    optimizes the space such that each bool takes
    1 bit space only. 
    
    As bitset stores the same information in
    compressed manner the operation on bitset
    are faster than that of array and vector.
    
    Stores 0 and 1 only */

    // Declaration --------------------------------------------->
    bitset<5>bt;
    cin>>bt;

    // all ------------------------------------------->
    // if all are set then print true otherwise false
    // 0000 ..... gives false
    cout<<"All operation = " <<bt.all()<<endl;

    // any -------------------------------------------->
    // Print true if at least 1 bit is set
    cout<<"Any operation = "<<bt.any()<<endl;

    // none ------------------------------------------->
    // Print true if none set bit
    cout<<"None operation = " <<bt.none()<<endl;

    // count ------------------------------------------->
    // Count the set bits
    cout<<"Set bits = "<<bt.count()<<endl;

    // flip -------------------------------------------->
    // flip bit at specific index 
    // 1 to 0 & vice-verse
    bt.flip(2);
    cout<<"After flip bitset = "<<bt<<endl;

    // set --------------------------------------------->
    // set the specific index or whole bits
    // give index
    bt.set(2);
    cout<<"bitset = "<<bt<<endl;
    // no parameter
    bt.set();
    cout<<"Bitset = "<<bt<<endl;
    // to make bit 0
    bt.set(2,0);
    cout<<"Bitset = "<<bt<<endl;

    // reset -------------------------------------------->
    // reset to all 0 
    bt.reset(2);
    cout<<"Bitset after reset 2 = "<<bt<<endl;
    bt.reset();
    cout<<"Bitset after reset = "<<bt<<endl;

    // size ------------------------------------------------>
    cout<<"Size = "<<bt.size()<<endl;

    // test ----------------------------------------------->
    // check specific idex is set or not
    cout<<"Test at 1 = "<<bt.test(1)<<endl;




    return 0;
}