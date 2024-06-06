/*


*/

#include <iostream>
#include <cmath>

int main() {
  // put your code here
    double a, b, c, d;
    std::cin >> a >> b >> c;
    if (a == 0 and b == 0 and c == 0) {
         std::cout << 3;   
    }
    else if ( a == 0 and b == 0 and c != 0) {
         std::cout << 0;   
    }
    else if (a == 0 and b != 0) {
         std::cout << 1 << " " << (-c / b);   
    }
    else {
        d = b * b - 4 * a * c;
        if (d == 0) {
             std::cout << 1 << " " << (-b / (2 * a));   
        }
        else if (d > 0) {
            double x1, x2;
            x1 = (-b - sqrt(d)) / (2 * a);
            x2 = (-b + sqrt(d)) / (2 * a);
            std::cout << 2 << " " << std::min(x1, x2) << " " << std::max (x1, x2);
        }
        else if (d < 0) {
             std::cout << 0;   
        }
    }
  return 0;
}