/*
Дано натуральное число N. Необходимо разложить его на простые множители.
*/

#include <iostream>
using namespace std;

int main()
{
    int n, i = 2; // i=2, т.к 1 не является простым числом
    cin >> n; // натуральное число N
    while (i <= n){
        while (n % i == 0){
            n /= i;
            cout << i << " ";
        }
        i++;
    }
}
