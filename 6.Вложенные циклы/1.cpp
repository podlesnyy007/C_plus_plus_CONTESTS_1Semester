/*
Вам задана таблица из чисел, состоящая из N строк и M столбцов.
Вам необходимо найти сумму максимальных элементов строк.
Гарантируется, что в каждой строке есть ровно один максимальный элемент.
*/

#include<iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int x, max = -1000, s = 0;
	for (int i = 0; i < n; i++, max = -1000) {
		for (int j = 0; j < m; j++) {
			cin >> x;
			if (x > max)
				max = x;
		}
		s += max;
	}
	cout << s;
}
