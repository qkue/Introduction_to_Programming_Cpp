/*

*/

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  // put your code here
    int n;
    long long int sum_n=0, cnt=0, sum_s=0;
    double res;
    while (std::cin >> n && n) {
        sum_n += (n * n);
        sum_s += n;
        cnt++;
    }
    res = sqrt((sum_n - ((double) (sum_s * sum_s) / cnt)) / (cnt - 1));
    std::cout << std::fixed << res;
  return 0;
}