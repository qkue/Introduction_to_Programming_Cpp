/*
Парты

В некоторой школе решили набрать три новых математических класса и оборудовать кабинеты для них новыми партами. За каждой партой может сидеть два учащихся. Известно количество учащихся в каждом из трех классов. Выведите наименьшее число парт, которое нужно приобрести для них. Каждый класс сидит в своем кабинете.

Формат входных данных
Программа получает на вход три целых неотрицательных числа: количество учащихся в каждом из трех классов (числа не превышают 1000).

Формат выходных данных
Выведите одно целое число - ответ на задачу.

Sample Input 1:
20
21
22

Sample Output 1:
32

Sample Input 2:
16
18
20

Sample Output 2:
27

*/

#include <iostream>

int main() {
    // put your code here
    int n, m, c;
    std::cin >> n >> m >> c;
    std::cout << (n + n%2)/2 + (m + m%2)/2 + (c +c%2)/2;
    return 0;
}