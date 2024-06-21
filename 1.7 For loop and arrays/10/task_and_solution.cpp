/*
Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
6
1 2 2 3 3 3

Sample Output:
3

*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int now, prev;
    int answer = 0;

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            cin >> prev;
            answer += 1;
        } else {
            cin >> now;
            if (now != prev) {
                answer += 1;
            }
            prev = now;
        }

    }

    cout << answer;
    return 0;


}
