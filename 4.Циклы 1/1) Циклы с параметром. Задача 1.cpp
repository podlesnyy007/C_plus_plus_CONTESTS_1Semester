/*
Задано N целых чисел. Необходимо найти среди них максимальное.
*/

#include <iostream>
using namespace std;

int main()
{
	int n, k = -1000000;
	cin >> n;
	while (n>0) {
		int x;
		cin >> x;
		if (x > k)
			k = x;
		n--;
	}
	cout << k;
}
