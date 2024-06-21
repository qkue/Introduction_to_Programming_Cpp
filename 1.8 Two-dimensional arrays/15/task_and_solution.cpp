/*
По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.

Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:
4 5

Sample Output:
   1   2   3   4   5
  14  15  16  17   6
  13  20  19  18   7
  12  11  10   9   8

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[110][110];

    int row = 0, col = 0;
    int shift_r = 0, shift_col = 1;
    for (int num = 1; num <= (n * m); ++num) {
        arr[row][col] = num;
        
        if (arr[((row + shift_r) % n + n) % n]
               [((col + shift_col) % m + m) % m]) {
            int t = shift_r;
            shift_r = shift_col;
            shift_col = -t;
        }
        row += shift_r;
        col += shift_col;
        
    }


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout.width(4);
            cout << arr[i][j];
        }
        cout << endl;
    }
}
