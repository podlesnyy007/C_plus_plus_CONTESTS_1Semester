/*
Вам задана таблица из чисел, состоящая из N строк и M столбцов.
Вам необходимо найти строку с наименьшей суммой элементов.
*/

#include<iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int x, sum = 0, k = 0, s1 = 99999;
	for (int i = 0; i < n; i++, sum = 0) { 
		for (int j = 0; j < m; j++) {
			cin >> x;
			sum += x;
		}
		if (sum < s1) {
			s1 = sum;
			k = i + 1;
		}
	}
	cout << k << " " << s1;
}
