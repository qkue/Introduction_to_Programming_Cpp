/*
Дано число n, не превосходящее 10, и массив размером n × n. Проверьте, является ли этот массив симметричным относительно главной диагонали. Выведите слово “YES”, если массив симметричный, и слово “NO” в противном случае.

Sample Input:
3
0 1 2
1 2 3
2 3 4

Sample Output:
YES

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
    
    for (int i = 0; i <= n; ++i) {
        for (int j = i; j < n; ++j) {
            if (arr[i][j] != arr[j][i]) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";

}
