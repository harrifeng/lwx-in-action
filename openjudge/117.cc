#include <iomanip>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    char str[21] = { 0 };
    int  num[21] = { 0 };
    int size = 0;
    int i;
    while (cin.getline(str, 21)) {
        char* c = str;
        while (*c != '\0') {
            if (isdigit(*c) != 0) {
                num[size++] = *c - '0';
            }
            c++;
        }
        // std:: is not necessary here ad we using namespece std
        // I list here to indicate sort method is in std namespace
        // cpp is much easier to write code in real working environment.
        std::sort(num, num + size);
        for (i = 0; i < size; i++) {
            cout << setw(4);
            cout << num[i];
        }
        cout << endl;
        size = 0;
    }
    return 0;
}
