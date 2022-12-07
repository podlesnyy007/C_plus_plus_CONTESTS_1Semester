/*
Одноклеточная амеба каждые 3 часа делится на 2 клетки. Определите, сколько амеб будет через N часов.
*/

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
