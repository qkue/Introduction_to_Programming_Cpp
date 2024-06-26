/*
Яша плавал в бассейне размером N×M метров и устал. В этот момент он обнаружил, что находится на расстоянии X метров от одного из длинных бортиков (не обязательно от ближайшего) и Y метров от одного из коротких бортиков. Какое минимальное расстояние должен проплыть Яша, чтобы выбраться из бассейна на бортик?

Формат входных данных
Программа получает на вход числа N, M, X, Y.

Формат выходных данных
Программа должна вывести число метров, которое нужно проплыть Яше до бортика.

Sample Input:
23
52
8
43

Sample Output:
8

*/

#include <iostream>

int main() {
  // put your code here
    int n, m, x, y, t;
    std::cin >> n >> m >> x >> y;
    if (n > m) {
        t = n;
        n = m;
        m = t;
    }
    t = x;
    if (y < t) {
         t = y;   
    }
    if ((n - x) < t) {
        t = n - x;
    }
    if ((m - y) < t) {
        t = m - y;
    }
    std::cout << t;
  return 0;
}