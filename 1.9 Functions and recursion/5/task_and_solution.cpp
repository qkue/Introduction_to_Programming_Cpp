/*


*/

#include <iostream>

bool IsPointInSquare(double x, double y) {
    bool res = (((x) <= 1.0) && ((y) <= 1.0)) && ((x >= -1.0) && (y >= -1.0));
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
