/*
Найдите индексы первого вхождения максимального элемента.

Формат входных данных
Программа получает на вход размеры массива n и m, затем n строк по m чисел в каждой. n и m не превышают 100.

Формат выходных данных
Выведите два числа: номер строки и номер столбца, в которых стоит наибольший элемент в двумерном массиве. Если таких элементов несколько, то выводится тот, у которого меньше номер строки, а если номера строк равны то тот, у которого меньше номер столбца.

Sample Input:
3 4
0 3 2 4
2 3 5 5
5 1 2 3

Sample Output:
1 2

*/

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];

        }
    }
    int max_elem = arr[0][0];
    int row = 0, col = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] > max_elem) {
                max_elem = arr[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << row << " " << col;
    /*
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    */
}