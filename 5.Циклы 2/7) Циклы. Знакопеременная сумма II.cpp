/*
Дана последовательность вещественных чисел Ai, в которой первый член неотрицателен, а также присутствует хотя бы один
член, меньший нуля. Пусть n — номер первого отрицательного члена последовательности. Тогда вы должны вычислить
следующую величину:
S=−A1+A2/2−...+(−1)^n−1*An−1/n−1
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double n, s = 0;
    int i = 1;
    do {
        cin >> n;
        if (n > 0)
            s += pow(-1, i) * n / i;
        i++;
    } while (n >= 0);
    cout << fixed << setprecision(6) << s;
}
