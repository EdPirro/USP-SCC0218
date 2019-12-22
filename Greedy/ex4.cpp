#include <iostream>

using namespace std;

int main(void) { // O(1)
    int size;
    int answ = 0;
    cin >> size;
    int base =  ((size - 1) / 3) * 2;
    if((size - 1) % 3 == 0) answ = base;
    else if ((size - 1) % 3 == 1) answ = base + 2;
    else if ((size - 1) % 3 == 2) answ = base + 4;

    cout << answ << endl;
}