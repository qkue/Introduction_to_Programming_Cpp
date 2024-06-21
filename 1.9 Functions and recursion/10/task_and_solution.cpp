/*
Дано натуральное число n > 1. Выведите его наименьший делитель, отличный от 1.

Решение оформите в виде функции MinDivisor(n). Количество операций в программе должно быть пропорционально корню из n.

Указание. Если у числа n нет делителя, меньшего n , то число n — простое и ответом будет само число n.

Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:
4

Sample Output 1:
2

Sample Input 2:
5

Sample Output 2:
5

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

int main() {
    int n, min_num = 2;

    std::cin >> n;
    double min_sqrt_num = sqrt(n);
    std::cout << MinDivisor(n, min_sqrt_num, min_num);

}
