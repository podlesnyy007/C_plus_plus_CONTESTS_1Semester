/*
Дана последовательность чисел. Требуется найти второе по величине число в этой последовательности, то есть наибольшее
число в последовательности, строго меньшее её максимума.
*/

#include <iostream>
using namespace std;

int main()
{
    int n, max1 = -10000, max2 = -10000;
    cin >> n;
    while (n != 0) {
        int x;
        cin >> x;
        if (x > max1) {
            max2 = max1;
            max1 = x;
        }
        else if (x > max2 && x != max1)
            max2 = x;
        n--;
    }
    cout << max2;
}
