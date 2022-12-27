/*
Дан двумерный массив, элементы которого — целые числа. Удалите все столбцы, в которых первый элемент больше последнего.
*/

#include<iostream>
using namespace std;

int main() {

	int n, m, k = 0;
	cin >> n >> m;
	int** mas = new int* [n];
	for (int i = 0; i < n; i++) {
		mas[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		if (mas[0][i] > mas[n - 1][i]) {
			for (int a = i; a < m - 1; a++) {
				for (int b = 0; b < n; b++) {
					mas[b][a] = mas[b][a + 1];
				}
			}
			m--; //уменьшаем кол-во столбцов
			i--; //т.к удалили столбец удалили и переместили его, уменьшаем, чтобы проверить
		}
	}
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < m; j++) {
			cout << mas[i][j] << " ";
		}
	}
	for (int i = 0; i < n; i++) {
		delete[] mas[i];
	}
	delete[] mas;
}
