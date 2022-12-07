#include <iostream>
using namespace std;

int main()
{
    int n, k = 0, m = 0;
    cin >> n;
    for (int i = 2; i < (n - 1); i++) {
        if ((n - 1) % i == 0)
            k += 1;
    }
    for (int i = 2; i < (n + 1); i++) {
        if ((n + 1) % i == 0)
            m += 1;
    }
    if (k == 0 && m == 0)
        cout << "Yes";
    else
        cout << "No";
}
