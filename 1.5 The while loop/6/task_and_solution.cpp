/*
Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.

Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:
1

Sample Output 1:
YES

Sample Input 2:
2

Sample Output 2:
YES

*/

#include <iostream>

int main() {
  // put your code here
    int num, a=1, c=0;
    std::cin >> num;
    while (num > (a)) {
        a = a + a;
        ++c;
    }
    //std::cout << a;
    std::cout << (num == a ? "YES" : "NO");
  return 0;
}