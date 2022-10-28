/*
Даны длины оснований и высот двух равнобедренных трапеций. Найти сумму их периметров, используя подпрограмму
определения периметра равнобедренной трапеции по ее основаниям и высоте.
*/

#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

double tp(double x, double y, double z) {
    double p = (x + y + z) / 2;
    return x + y + 2 * sqrt(pow(z, 2) + pow(x - y, 2) / 4);
}

int main()
{
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    double xx = tp(a, b, c);
    double yy = tp(d, e, f);
    cout << fixed << setprecision(3) << xx + yy;
}
