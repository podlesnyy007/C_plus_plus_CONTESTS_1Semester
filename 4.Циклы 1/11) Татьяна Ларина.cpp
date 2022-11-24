#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int o, k = 0;
    cin >> o;
    for (int i = 1; k < o; i++) {
        k += i;
        if (k == o)
            cout << i;
    }
}
