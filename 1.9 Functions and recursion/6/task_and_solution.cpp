/*


*/

#include <iostream>
#include <cmath>

bool IsPointInSquare(double x, double y) {
    bool res = (fabs(x) + fabs(y) <= 1.0);
    return res;
}

int main() {
    double x, y;
    std::cin >> x >> y;
    if (IsPointInSquare(x, y)) {
        std::cout << "YES";
    } else {
    std::cout << "NO";
    }

}
