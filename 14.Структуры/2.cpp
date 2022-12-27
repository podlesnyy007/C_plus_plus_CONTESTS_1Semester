/*
Дано два вектора p1 и p2. Необходимо вычислить сумму этих двух векторов.
*/

#include<fstream> //класс двунаправленных (входных и выходных) файловых потоков
using namespace std;

ifstream in("input.txt"); // открываем глобальные файловые потоки
ofstream out("output.txt");

struct vector {
	double x, y;
};

int main() {
	vector mas[2], a = {0, 0}; //в массив a будем считать сумму векторов
	for (int i = 0; i < 2; i++) {
		in >> mas[i].x >> mas[i].y;
		a.x += mas[i].x;
		a.y += mas[i].y;
	}
	out << a.x << " " << a.y;
	in.close(); out.close();
}
