/*
Даны три натуральных числа A, B, C. Определите, существует ли треугольник с такими сторонами. Если треугольник существует, выведите строку YES, иначе выведите строку NO.
Треугольник — это три точки, не лежащие на одной прямой.

Формат входных данных
Вводятся три числа.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
3
4
5

Sample Output:
YES

*/

#include <iostream>

int main() {
  // put your code here
    int f, s, t;
    std::cin >> f >> s >> t;
    std::string ans = "NO";
    int temp;
    
    if (f >= s) {
        temp = s;
        s = t;
        t = temp;
    }
    else {
        temp = f;
        f = t;
        t = temp;
    }
    if (f <= s) {
        temp = f;
        f = s;
        s = temp;
    }
	
    if (f + s > t && f + t > s && s + t > f) {
        ans = "YES";
    }
    std::cout << ans;
  return 0;
}