#include <iostream>
using namespace std;

class Base {
public:
    int val;

    Base(int v): val(v){}
};

int main() {
    Base *ptr = new Base(123);
    cout << "value is " << ptr->val << endl;
    //////////////////////////////////////////////////////////////////////////
    // now ptr is already deleted, do not use it, unless ptr is reassign a  //
    // sentence like 'new Base(456)'                                        //
    //////////////////////////////////////////////////////////////////////////
    delete ptr; // if one pointer is deleted, but not assign NULL, it is called dangling pointer

    ///////////////////////////////////////////////
    // correct way to use ptr                    //
    // ptr = NULL;                               //
    // .....                                     //
    // if (ptr != NULL) {                        //
    //  cout << "value is " << ptr->val << endl; //
    // }                                         //
    ///////////////////////////////////////////////
    cout << "value is " << ptr->val << endl; // dangerous here! you are using other's memory content!!
}

/////////////////////////
// ===Sample Output=== //
// value is 123	       //
// value is 0	       //
/////////////////////////
