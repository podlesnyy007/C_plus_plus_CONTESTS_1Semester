/*
Даны вещественные числа a, b, c, d, e, f и g. Найдите площадь пятиугольника, изображенного на рисунке,
используя подпрограмму для расчета площади треугольника по трем сторонам.
*/

#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

double tp(double x, double y, double z) {
    double p = (x + y + z) / 2;
    return sqrt(p * (p - x) * (p - y) * (p - z));
}

int main()
{
    double a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    double xx = tp(a, b, f);
    double yy = tp(f, g, c);
    double zz = tp(e, d, g);
    cout << fixed << setprecision(2) << xx + yy + zz;
}
