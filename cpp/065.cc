#include <iostream>
#include <map>

using namespace std;

int main(int argc, char *argv[])
{
    int cnt;
    int i, j;
    string stuNum;
    int month;
    int day;
    cin >> cnt;
    map<int, string> sum;

    for (i = 0; i < cnt; i++) {
        cin  >> stuNum >> month >> day;
        int tmpKey = month * 100 + day;
        if (sum.find(tmpKey) != sum.end()) {
            sum[tmpKey] += " " + stuNum;
        } else {
            sum[tmpKey] = stuNum;
        }
    }

    for (map<int, string>::iterator it = sum.begin(); it != sum.end(); ++it) {
        int m = (it->first) / 100;
        int d = (it->first) % 100;
        cout << m << " " << d << " " << it->second << endl;
    }
    return 0;
}
