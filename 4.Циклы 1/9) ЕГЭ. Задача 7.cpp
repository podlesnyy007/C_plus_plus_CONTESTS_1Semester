#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int n, k = 0;
    cin >> n;
    for (int i = 0; i < n / 2; i++) {
        int x, y;
        cin >> x; cin >> y;
        k += x * y;
    }
    cout << k;
}
