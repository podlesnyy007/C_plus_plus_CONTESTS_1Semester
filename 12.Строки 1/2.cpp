/*
Выясните, имеются ли в строке S два соседствующих одинаковых символа.
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s; int f = 0;
	cin >> s;
	for (int i = 0; i < s.size() - 1; i++) {
		if (s[i] == s[i + 1]) {
			cout << "YES";
			f++;
			break;
		}
	}
	if (f == 0) {
		cout << "NO";
	}
}
