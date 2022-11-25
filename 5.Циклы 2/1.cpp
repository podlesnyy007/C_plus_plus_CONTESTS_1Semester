#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    float b1 = 100, b2 = 100, b;
    int n;
    cin >> n;
    for (int i = 3; i <= n; i++) {
        b = b1 + b2;
        b1 = b2;
        b2 = b;
    }
    cout << b/1000;
}
