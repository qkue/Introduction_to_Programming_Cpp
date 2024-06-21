/*
Дано натуральное число n > 1. Проверьте, является ли оно простым. Программа должна вывести слово YES, если число простое и NO, если число составное.

Решение оформите в виде функции IsPrime(n), которая возвращает True для простых чисел и False для составных чисел. Количество операций в программе должно быть пропорционально корню из n.

Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:
2

Sample Output 1:
YES

Sample Input 2:
4

Sample Output 2:
NO

*/

#include <iostream>
#include <cmath>

double rec(double a, int n) {
    if (n == 0) {
        return 1;
    }
    if (n > 0) {
        return a * rec(a, n - 1);
    } else {
        return (1 / a * rec(a, n + 1));
    }

}

int MinDivisor(int n, double min_sqrt_num, int min_num) {
    if (min_num > min_sqrt_num)
        return n;

    if (n % min_num == 0) {
        return min_num;
    }else {
        return MinDivisor(n, min_sqrt_num, ++min_num);
    }
}

bool IsPrime(int n, double min_sqrt_num, int min_num) {
    if (n == MinDivisor(n, min_sqrt_num, min_num)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n, min_num = 2;

    std::cin >> n;
    double min_sqrt_num = sqrt(n);
    if (IsPrime(n, min_sqrt_num, min_num)) {
        std::cout << "YES";
    } else {
        std::cout <<  "NO";
    }

}
