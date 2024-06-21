/*


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

int main() {
    double a;
    int n;
    std::cin >> a >> n;
    std::cout << Power(a, n);
    return 0;
}
