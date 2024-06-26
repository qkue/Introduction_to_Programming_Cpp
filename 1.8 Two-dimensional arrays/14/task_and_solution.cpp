/*
Даны числа n и m. Заполните массив размером n × m в шахматном порядке: клетки одного цвета заполнены нулями, а другого цвета - заполнены числами натурального ряда сверху вниз, слева направо. В левом верхнем углу записано число 1.

Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:
3 5

Sample Output:
   1   0   2   0   3
   0   4   0   5   0
   6   0   7   0   8

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[110][110];

    int num = 0;
    //int diag_arr[110][110];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            num += ((!(i % 2) && !(j % 2)) ||
                    ((i % 2) && (j % 2)));
            arr[i][j] = (num) * ((!(i % 2) && !(j % 2)) ||
                                   ((i % 2) && (j % 2)));
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout.width(4);
            cout << arr[i][j];
        }
        cout << endl;
    }
}
