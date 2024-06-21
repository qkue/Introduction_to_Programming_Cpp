/*
Напишите функцию min(a, b), вычисляющую минимум двух чисел. Затем напишите функцию min4(a, b, c, d), вычисляющую минимум 4 чисел с помощью функции min. Считайте четыре целых числа и выведите их минимум.

Формат входных данных
Вводятся четыре целых числа.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
4
5
6
7

Sample Output:
4

*/

#include <iostream>

using namespace std;

int min_two(int a, int b) {
    if (b < a) {
        swap(a, b);
    }
    return a;
}

int min_four(int a, int b, int c, int d) {
    int mini;
    mini = min_two(a, b);
    mini = min_two(mini, c);
    mini = min_two(mini, d);
    return mini;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min_four(a, b, c, d);
}
