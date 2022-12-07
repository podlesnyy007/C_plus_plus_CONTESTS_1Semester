#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int n, k = 1, s = 0;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        k = k * 2 + i;
        s += k;
    }
    cout << s+1;
}
