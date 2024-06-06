/*


*/

#include <iostream>

int main() {
  // put your code here
   int n, cnt;
   double x, a, res;
   std::cin >> n >> x >> res;
   cnt = n + 1;
   while (n > 0 && std::cin >> a && cnt > 0) {
        res = res * x + a;
   }
   std::cout << res;
  return 0;
}