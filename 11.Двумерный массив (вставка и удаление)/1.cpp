/*
Дан двумерный массив, элементы которого — целые числа. Вставьте новый столбец, каждый 
элемент которого число ноль, перед всеми столбцами, в которых встречается заданное число X.
*/

#include<iostream>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	int** mas = new int* [n];
	for (int i = 0; i < n; i++) {
		mas[i] = new int[2 * m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (mas[j][i] == k) {// идем по столбцам
				for (int q = m; q > i; q--) { //поэлементный сдвиг массива по столбцам
					for (int w = 0; w < n; w++) {
						mas[w][q] = mas[w][q - 1];
					}
				}
				m++; //увеличиваем кол-во столбцов
				for (int p = 0; p < n; p++) { //заполняем p строчку i столбца нулями
					mas[p][i] = 0;
				}
				i++; break; //перешагиваем через 1 столбец т.к. столбцов стало +1 и относительно последней итерации
				// i-тый столбец теперь i+1
			}
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
