/*
Даны два целых числа. Программа должна вывести единицу, если первое число больше второго, двойку, если второе больше первого, или ноль, если они равны.

Формат входных данных
Вводятся два числа.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
1
2

Sample Output:
2

*/

#include <iostream>

int main() {
   int n, m;
   std::cin >> n >> m;
   if (n > m) {
       std::cout << 1;
   }
   else if (n < m) {
       std::cout << 2;
   }
   else if (n == m) {
       std::cout << 0;
   }
  // put your code here
  return 0;
}