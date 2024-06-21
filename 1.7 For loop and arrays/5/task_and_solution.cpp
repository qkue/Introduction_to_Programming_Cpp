/*
Найдите количество положительных элементов в данном массиве.

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
5
1 -2 3 -4 5

Sample Output:
3

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, answer = 0;
    cin >> n;
    vector <int> nums(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    for (int i = 0; i < n; ++i) {
        if (nums[i] > 0) {
            ++answer;
        }
    }
    
    cout << answer;
    return 0;

}
