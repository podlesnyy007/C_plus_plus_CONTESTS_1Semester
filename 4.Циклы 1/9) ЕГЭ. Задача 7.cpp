/*
Дана последовательность чисел a1,a2,…,aN, число N (количество чисел в последовательности) — четное число.
Вам необходимо подсчитать сумму a1⋅a2+a3⋅a4+⋯+an−1⋅an.
*/

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
