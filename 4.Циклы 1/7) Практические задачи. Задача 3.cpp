/*
Составить программу нахождения для заданного натурального числа N всех делителей, кратных числу C.
*/

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int n, c;
    cin >> n >> c;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i % c == 0)
                cout << i << " ";
        }
    }
}
