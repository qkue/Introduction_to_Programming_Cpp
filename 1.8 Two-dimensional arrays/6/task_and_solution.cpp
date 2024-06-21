/*
Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j

Формат входных данных
Программа получает на вход размеры массива n и m, не превосходящие 100, затем элементы массива, затем числа i и j.

Формат выходных данных
Выведите результат.

Sample Input:
3 4
11 12 13 14
21 22 23 24
31 32 33 34
0 1

Sample Output:
12 11 13 14
22 21 23 24
32 31 33 34

*/

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[100][100];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];        
        }
    }
    
    int rep_i, rep_j;
    cin >> rep_i >> rep_j;
    
    for (int i = 0; i < n; ++i) {
        swap(arr[i][rep_i], arr[i][rep_j]);
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
