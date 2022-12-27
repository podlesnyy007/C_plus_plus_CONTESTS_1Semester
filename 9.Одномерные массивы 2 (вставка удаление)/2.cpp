/*
Дан одномерный массив, элементы которого — целые числа. Также дано целое число X. Вставьте в заданный массив элемент X перед первым отрицательным элементом.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	int* mas = new int[2 * n];
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
	bool flag = true;
	for (int i = 0; i < n; i++) {
		if (mas[i] < 0) {
			for (int j = n; j > i; j--) {
				mas[j] = mas[j - 1];
			}
			mas[i] = x;
			flag = false;
			break;
		}
	}
	if (flag == false) {
		for (int i = 0; i < n + 1; i++) {
			cout << mas[i] << " ";
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			cout << mas[i] << " ";
		}
	}
}
