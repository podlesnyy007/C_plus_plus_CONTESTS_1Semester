#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int m, k = 0;
    cin >> m;
    for (int i = 1; k < m; i++) {
        int c;
        cin >> c;
        k += c;
        if (k >= m)
            cout << i;
    }
}
