/*
Определите среднее значение всех элементов последовательности, завершающейся числом 0.

Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
1
7
9
0

Sample Output:
5.66666666667

*/

#include <iostream>
#include <iomanip>

int main() {
  // put your code here
    double sum=0.0;
    int cnt=0, t;
    
    while ((std::cin >> t) && t) {
        sum = sum + t;
        cnt++;
    }
    //cout << ;
    //std::cout.precision(11);
    std::cout << std::fixed << (double)(sum / cnt);
  return 0;
}