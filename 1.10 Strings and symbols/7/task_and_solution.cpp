/*
По данной строке определите, является ли она палиндромом (то есть, читается одинаково как слева-направо, так и справа-налево).

Входные данные
На вход подается 1 строка без пробелов.

Выходные данные
Необходимо вывести yes, если строка является палиндромом, и no в противном случае.

Sample Input:
kayak

Sample Output:
yes

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    cin >> text;
    for (int b = 0, e = text.size()-1; b < text.size() / 2; ++b, --e) {
        if (text[b] != text[e]) {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}
