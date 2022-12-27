/*
Дается список студентов с личными данными и данными о днях рождения. Требуется вывести номера тех студентов, которые родились летом. 
Летними считать следующие месяцы: июнь, июль, август. Месяцы нумеруются с единицы.
*/

#include<fstream> //класс двунаправленных (входных и выходных) файловых потоков
#include<string>
using namespace std;
ifstream in("input.txt"); // открываем глобальные файловые потоки
ofstream out("output.txt");

struct student {
	string familiya, imya, otchestovo;
	int day, month, year;
};

int main() {
	int n, x = 0;
	in >> n;
	int* ar = new int[n];
	student* mas = new student[n];
	for (int i = 0; i < n; i++) {
		in >> mas[i].familiya >> mas[i].imya >> mas[i].otchestovo >>
			mas[i].day >> mas[i].month >> mas[i].year;
	}
	for (int i = 0; i < n; i++) {
		if (mas[i].month == 6 || mas[i].month == 7 || mas[i].month == 8) {
			ar[x] = i + 1;
			x++;
		}
	}
	out << x << endl;
	for (int i = 0; i < x; i++) {
		out << ar[i] << endl;
	}
}
