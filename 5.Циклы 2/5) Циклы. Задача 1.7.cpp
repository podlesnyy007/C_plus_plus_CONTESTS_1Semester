#include <iostream>
using namespace std;

int main()
{
    int a, b, x1 = 1, x2 = 1, x = 0;
    cin >> a >> b;
    while (x <= b) {
        x = x1 + x2;
        if (x2 >= a)
            cout << x2 << " ";
        x1 = x2;
        x2 = x;
    }
}
