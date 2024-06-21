/*


*/

#include <iostream>
#include <cmath>

bool IsPointInArea(double x, double y) {
    bool res = (((y <= -x) && (y <= 2 * x + 2) && ((x + 1) * (x + 1) + (y-1) * (y - 1) >= 4)) ||
                 ((y >= -x) && (y >= 2 * x + 2) && ((x + 1) * (x + 1) + (y - 1) * (y - 1) <= 4)));
    return res;
}

int main() {
    double x, y;
    std::cin >> x >> y;
    if (IsPointInArea(x, y)) {
        std::cout << "YES";
    } else {
    std::cout << "NO";
    }

}
