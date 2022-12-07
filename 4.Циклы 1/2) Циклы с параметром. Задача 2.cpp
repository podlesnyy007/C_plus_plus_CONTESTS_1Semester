/*
Задана последовательность из N целых чисел. Необходимо найти порядковый номер числа с максимальным модулем. 
Если таких чисел несколько, вывести наименьший номер.
*/

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
