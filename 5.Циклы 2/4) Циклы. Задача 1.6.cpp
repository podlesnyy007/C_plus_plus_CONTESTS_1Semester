/*
Два простых числа, разнящихся на 2, называются "близнецами". Дано натуральное число N.
Определить, являются ли числа, находящиеся по обе стороны от N, "близнецами".
*/

#include <iostream>
using namespace std;

int main()
{
    int n, k = 0, m = 0;
    cin >> n;
    for (int i = 2; i < (n - 1); i++) { // проверяем число слева от N, является ли оно простым; i=2, т.к 1 не простое число
        if ((n - 1) % i == 0) // проверяем делится ли на числа кроме 1 и самого себя
            k += 1; 
    }
    for (int i = 2; i < (n + 1); i++) { // делаем тоже самое, только проверяем число справа от N
        if ((n + 1) % i == 0)
            m += 1;
    }
    if (k == 0 && m == 0) // т.е они не делятся на числа кроме 1 и самого себя
        cout << "Yes";
    else
        cout << "No";
}
