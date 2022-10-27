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


#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

double tp(double x, double y, double z) {
    double p = (x + y + z) / 2;
    return sqrt(p*(p-x)*(p-y)*(p-z));
}

int main()
{
    double a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;

}
