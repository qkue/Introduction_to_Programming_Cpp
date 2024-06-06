/*


*/

#include <iostream>

int main() {
  // put your code here
    double a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;
    double x, y;
    x = (e * d - b * f) / ( a * d - b * c);
    y = (a * f - c * e) / (a * d - b * c);
    std::cout << x << " " << y;
  return 0;
}