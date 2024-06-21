/*


*/

#include <iostream>

double rec(double a, int n) {
    if (n == 0) {
        return 1;
    }
    if (n > 0) {
        return a * rec(a, n - 1);
    } else {
        return (rec(a, n + 1) / a);
    }

}

int main() {
    double a;
    int n;
    std::cin >> a >> n;
    std::cout << rec(a, n);

}
