/*
Последовательность Фибоначчи определяется так:

F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

По данному числу N определите N-е число Фибоначчи F(N).

Формат входных данных
Вводится натуральное число N.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
6

Sample Output:
8

*/

#include <iostream>

int main() {
  // put your code here
    int num, cnt=1, f = 1, res=0, t;
    std::cin >> num;
    while (cnt < num) {
        t = f;
        f = res + f;
        res = t;
        ++cnt;
    }
    std::cout << f;
  return 0;
}