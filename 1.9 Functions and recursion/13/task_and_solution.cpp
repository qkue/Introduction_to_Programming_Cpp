/*
Дана последовательность чисел, завершающаяся числом 0. Найдите сумму всех этих чисел, не используя цикл.

Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
1
7
9
0

Sample Output:
17

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

double Power(double a, int n) {
    if (n == 0) {
        return 1;
    }

    if (n % 2) {
        return a * Power(a, n- 1);
    } else {
        return Power(a * a, n /2);
    }
}

int Combainer() {
    int num;
    std::cin >> num;
    if (num == 0) {
        return 0;
    }
    return num + Combainer();
}

int main() {
    //double a;
    //int n;
    //std::cin >> a >> n;
    std::cout << Combainer();
    return 0;
}
