/*
В данной строке S вставить символ c1 после каждого вхождения символа c2.
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
	char c2;
	string c1, s;
	cin >> c1 >> c2 >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == c2) {
			s.insert(++i, c1);
		}
	}
	cout << s;
}
