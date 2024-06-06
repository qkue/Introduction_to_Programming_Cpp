/*
Шоколадка имеет вид прямоугольника, разделенного на N×M долек. Шоколадку можно один раз разломить по прямой на две части. Определите, можно ли таким образом отломить от шоколадки ровно K долек.

Формат входных данных
Программа получает на вход три числа: N, M, K

Формат выходных данных
Программа должна вывести одно из двух слов: YES или NO.

Sample Input 1:
4
2
6

Sample Output 1:
YES

Sample Input 2:
2
10
7

Sample Output 2:
NO

*/

#include <iostream>

int main() {
  // put your code here
    int n, m, k;
    std::cin >> n >> m >> k;
    int temp;
    if (n > m) {
        temp = n;
        n = m;
        m = temp;
    }
    std::cout << (((((k / n) < m) && ((k / n) * n == k))) || (((k / m) < n) && (k > m) && ((k / m) * m == k)) ? "YES" : "NO");
  return 0;
}