/*
Дано положительное действительное число X. Выведите его дробную часть.

Формат входных данных
Вводятся положительное действительное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
17.9

Sample Output:
0.9

*/

#include <iostream>

int main() {
  // put your code here
  double n;
  std::cin >> n;
  std::cout << n - (int)n;
  return 0;
}