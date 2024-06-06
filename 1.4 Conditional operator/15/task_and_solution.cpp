/*
Дано три числа. Упорядочите их в порядке неубывания.

Формат входных данных
Вводятся три числа.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
1
2
1

Sample Output:
1 1 2

*/

#include <iostream>

int main() {
  // put your code here
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a > b) {
        b = a + b;
        a = b - a;
        b = b - a;
    }
    if (b > c) {
        c = b + c;
        b = c - b;
        c = c - b;
    }
    if (a > b) {
        b = a + b;
        a = b - a;
        b = b - a;
    }    
    std::cout << a << " " << b << " " << c;
  return 0;
}