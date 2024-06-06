/*
По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.

Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
50

Sample Output:
1 4 9 16 25 36 49

*/

#include <iostream>

int main() {
  // put your code here
    int start, num = 1;
    std::cin >> start;
    while ((num * num) <= start) {
        std::cout << num * num << " ";
        num++;
    }
  return 0;
}