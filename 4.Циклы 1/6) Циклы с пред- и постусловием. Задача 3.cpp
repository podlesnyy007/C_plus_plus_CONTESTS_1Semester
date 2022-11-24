#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int m, m0;
    cin >> m >> m0;
    if (m0 >= m)
        cout << 0;
    for (int i = 1; m0 < m; i++) {
        int x;
        cin >> x;
        if (x > 0)
            m0 += x;
        if (x <= 0)
            i--;
        if (m0 >= m)
            cout << i;
    }
}
