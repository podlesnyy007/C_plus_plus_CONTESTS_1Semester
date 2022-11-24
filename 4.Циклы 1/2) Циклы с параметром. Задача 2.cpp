#include <iostream>
using namespace std;

int main()
{
    int n, m = -1, t = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (abs(x) > m) {
            m = abs(x);
            t = i;
        }
    }
    cout << t;
}
