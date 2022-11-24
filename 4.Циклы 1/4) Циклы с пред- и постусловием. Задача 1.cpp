#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int m, k = 0;
    cin >> m;
    if (m == 0)
        cout << 0;
    for (int i = 0; k < m; i++) {
        k += pow(i, 3) / 5 + i * i % 7;
        if (k >= m)
            cout << i;
    }
}
