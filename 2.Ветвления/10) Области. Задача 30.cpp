/*
Дана область G. Точка X задана своими координатами. Определить, принадлежит ли точка X заданной области (включая границу).
Дана окружность 1, 3 и 4 четверти. Радиус 2.
*/

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    double x, y;
    cin >> x >> y;
    double l = sqrt(pow(x, 2) + pow(y, 2));
    if (l <= 2 && !(x < 0 && y > 0)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}
