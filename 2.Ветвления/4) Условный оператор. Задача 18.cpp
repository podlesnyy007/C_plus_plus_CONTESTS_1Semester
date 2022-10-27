/* 
Во входном файле даны 3 целых числа A, B, C. Определить, могут ли они являться длинами сторон невырожденного
треугольника. Если да, то в выходной файл вывести его площадь, иначе вывести −1.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    double x = sqrt(p * (p - a) * (p - b) * (p - c));
    if (a + b > c && a + c > b && b + c > a) {
        cout << fixed << setprecision(6) << x;
    }
    else {
        cout << "-1";
    }
    return 0;
}
