/*
Даны длины сторон треугольника. Вычислите площадь треугольника.

Формат входных данных
Вводятся три положительных числа.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
3
4
5

Sample Output:
6

*/

#include <iostream>
#include <math.h>

int main() {
  // put your code here
    double a, b, c, p;
    std::cin >> a >> b >> c;
    p = ((a + b + c) / 2.0);
       
    std::cout << sqrt(p * (p - a) * (p - b) * (p - c)) ;
  return 0;
}