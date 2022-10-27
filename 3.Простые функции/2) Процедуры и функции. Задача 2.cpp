/*
Найдите длину стороны BD фигуры ABDC по заданным сторонам AB, AC и DC, используя подпрограмму определения гипотенузы по двум катетам.
*/

#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

double tp(double x, double y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

int main()
{
    double a, b, c, d, e;
    cin >> a >> b >> c;
    d = tp(a, b);
    e = tp(c, d);
    cout << fixed << setprecision(2) << e;
    return 0;
}
