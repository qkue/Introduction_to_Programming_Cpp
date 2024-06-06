/*
Последовательность состоит из натуральных чисел и завершается числом 0. Определите значение второго по величине элемента в этой последовательности, то есть элемента, который будет наибольшим, если из последовательности удалить наибольший элемент.

Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).

Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:
4
4
2
3
0

Sample Output 1:
4

Sample Input 2:
2
1
0

Sample Output 2:
1

*/

#include <iostream>

int main() {
  // put your code here
    int num, super_max = 0, pre_max = 0;
    std::cin >> num;
    while (num) {
        if (num >= super_max) {
            pre_max = super_max;
            super_max = num;
        }
        else if (pre_max < num && num < super_max) {
            pre_max = num;
        }
        std::cin >> num;
        
    }
    std::cout << pre_max;
  return 0;
}