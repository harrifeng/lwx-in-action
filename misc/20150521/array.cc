#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class MyArray{
private:
    int length;
public:
    MyArray() {
        length = 1;
        cout << "ctor myArray" << endl;
    }
    ~ MyArray() {
        cout << "dtoc myArray" << endl;
    }
};


class SortArray : public MyArray {
public:
    SortArray() {
        //Wrong here!, should call MyArray() automatically!
        //call here will call MyArray twice
        MyArray();
        cout << "ctor sortArray" << endl;
    }

    ~SortArray() {
        cout << "dtoc sortArray" << endl;
    }
};

int main(int argc, char *argv[])
{
    SortArray s;
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// ctor myArray                                   //
// ctor myArray                                   //
// dtoc myArray                                   //
// ctor sortArray                                 //
// dtoc sortArray                                 //
// dtoc myArray                                   //
////////////////////////////////////////////////////
