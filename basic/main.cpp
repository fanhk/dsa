#include <iostream>
#include "func.h"
using namespace std;

int main() {

    int a, b;
    while (cin >> a >> b) {
        cout << add(a+b) << endl;
    }

    return 0;
}