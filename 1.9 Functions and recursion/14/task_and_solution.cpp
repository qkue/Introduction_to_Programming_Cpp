/*
Напишите функцию fib(n), которая по данному целому положительному n возвращает n-e число Фибоначчи. В этой задаче нельзя использовать циклы - используйте рекурсию.

Первое и второе числа Фибоначчи равны 1, а каждое следующее равно сумме двух предыдущих.

Формат входных данных
Вводится целое число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
1
Sample Output:
1

*/

#include <iostream>
#include <cmath>

int Combainer();
double Power(double a, int n);
bool IsPrime(int n, double min_sqrt_num, int min_num);
int MinDivisor(int n, double min_sqrt_num, int min_num);
double rec(double a, int n);
int fib(int n);


int main() {
    //double a;
    int n;
    std::cin >> n;
    std::cout << fib(n);
    return 0;
}

int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}


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

