/*
Дан текстовый файл. Найдите первые символы всех непустых строк.
*/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	string s;
	ifstream in("input.txt"); //открываем входной поток in и связываем его с файлом
	ofstream out("output.txt");
	while (getline(in, s)) {
		if (s.empty() == false) {
			out << s[0];
		}
	}
	//empty возвращает true, если s является пустой строкой
	in.close();
	out.close();
}
