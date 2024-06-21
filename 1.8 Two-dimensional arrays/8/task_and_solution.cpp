/*
Дан квадратный двумерный массив размером n × n и число k. Выведите элементы k-й по счету диагонали ниже главной диагонали (т.е. если k = 1, то нужно вывести элементы первой диагонали, лежащей ниже главной, если k = 2, то второй диагонали и т.д.).

Значение k может быть отрицательным, например, если k = −1, то нужно вывести значение первой диагонали лежащей выше главной. Если k = 0, то нужно вывести элементы главной диагонали.

Программа получает на вход число n, не превосходящие 10, затем массив размером n × n, затем число k.

Sample Input 1:
4
1 2 3 4
5 6 7 8
0 1 2 3
4 5 6 7
1

Sample Output 1:
5 1 6

Sample Input 2:
4
1 2 3 4
5 6 7 8
0 1 2 3
4 5 6 7
-2

Sample Output 2:
3 8

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[10][10];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];        
        }
    }
    
    int k;
    cin >> k;
    for (int i = 0; i < n - (k > 0 ? k : -k); ++i) {
        if (k > 0) {
            cout << arr[i + k][i] << " ";
        } else {
            cout << arr[i][i - k] << " ";
        }
    }
    

}
