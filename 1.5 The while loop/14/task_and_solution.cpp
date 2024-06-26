/*
Дана последовательность натуральных чисел, завершающаяся числом 0. Определите, какое наибольшее число подряд идущих элементов этой последовательности равны друг другу. Если не нашлось ни одной пары, тройки и т.д. элементов, равных друг другу, то программа должна вывести число 1.

Формат входных данных
Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
1
7
7
9
1
0

Sample Output:
2

*/

#include <iostream>

int main() {
  // put your code here
    int t, num = 0, seq_cnt = 1, cnt = 0;
    std::cin >> t;
    while (t) {
         if (t != num) {
             if (seq_cnt > cnt) {
                 cnt = seq_cnt;
             }
             seq_cnt = 1;
             num = t;
         }
        else if (t == num) {
            seq_cnt = seq_cnt + 1;    
        }
        std::cin >> t;
    }
    if (seq_cnt > cnt) {
         cnt = seq_cnt;
    }
    std::cout << cnt;
  return 0;
}