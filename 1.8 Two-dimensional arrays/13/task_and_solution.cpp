/*
По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “диагоналями”, как показано в примере.

Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:
3 5

Sample Output:
   1   2   4   7  10
   3   5   8  11  13
   6   9  12  14  15

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[110][110];

    int num = 1;
    //int diag_arr[110][110];
    for (int i = 0; i < n + m - 1; ++i) {
        for (int j = 0; j < n && j <= i; ++j) {
            if ((i - j) < m) {
                arr[j][i - j] = num++;
            }
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
