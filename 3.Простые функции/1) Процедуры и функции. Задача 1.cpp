/*
Определите подпрограмму для расчета длины отрезка по координатам его вершин и подпрограмму для подсчета периметра
треугольника по длинам сторон. Найдите с помощью разработанных функций периметр треугольника, заданного
координатами своих вершин.
*/

#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

double tp(double x, double y, double z, double w) {
    return sqrt(pow(x - z, 2) + pow(y - w, 2));
}

double per(double x, double y, double z) {
    return x + y + z;
}

int main()
{
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    double xx = tp(a, b, c, d);
    double yy = tp(a, b, e, f);
    double zz = tp(c, d, e, f);
    cout << fixed << setprecision(2) << per(xx, yy, zz);
}
