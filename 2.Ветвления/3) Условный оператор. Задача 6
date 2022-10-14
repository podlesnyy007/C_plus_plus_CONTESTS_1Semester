/* 
Дано положительное четырехзначное число. Определить, является ли сумма его цифр двузначным числом.
*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int a = x % 10;
    int b = x % 100 / 10;
    int c = x % 1000 / 100;
    int d = x / 1000;
    int y = a + b + c + d;
    if (10 <= y && y <= 99) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
