#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int n, k = 1;
    cin >> n;
    for (int i = 0; i < n; i+=3) {
        k *= 2;
    }
    cout << k;
}
