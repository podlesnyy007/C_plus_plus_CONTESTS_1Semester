#include <iostream>
using namespace std;

int main()
{
    int n, i = 2, f = 0;
    cin >> n;
    while (i <= n){
        while (n % i == 0){
            n /= i;
            cout << i << " ";
        }
        i++;
    }
}
