/*
По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”, как показано в примере.

Формат входных данных
Вводятся два числа n и m, каждое из которых не превышает 30.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:
3 5

Sample Output:
   1   2   3   4   5
  10   9   8   7   6
  11  12  13  14  15

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[1000][1000];
    
    int num = 1;
    for (int i = 0; i < n; ++i) {
        if (i % 2) {
            for (int x = 0, temp = num + m - 1; x < m; ++x, --temp, ++num) {
                arr[i][x] = temp;
            }
        } else {
            for (int x = 0; x < m; ++x) {
                arr[i][x] = num++;
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