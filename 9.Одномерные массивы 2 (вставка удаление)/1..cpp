/*
Дан одномерный массив, элементы которого — целые числа. Удалите из него все четные числа.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
		if (mas[i] % 2 == 0) {
			mas[i] = mas[i + 1];
			n--;
			i--;
		}
	}
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
}
