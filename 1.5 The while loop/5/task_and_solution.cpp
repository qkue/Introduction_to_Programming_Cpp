/*
По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.

Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
50

Sample Output:
1 2 4 8 16 32

*/

#include <iostream>

int main() {
  // put your code here
    int num, t=1;
    std::cin >> num;
    while (num >= t) {
         std::cout << t << " ";
        t = t + t;
    }
  return 0;
}