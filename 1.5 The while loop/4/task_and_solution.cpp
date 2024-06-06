/*
Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.

Формат входных данных
Вводится целое положительное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
15

Sample Output:
3

*/

#include <iostream>

int main() {
  // put your code here
    int num, t = 2;
    std::cin >> num;
    while (num % t != 0) {
        ++t;   
    }
    std::cout << t;
  return 0;
}