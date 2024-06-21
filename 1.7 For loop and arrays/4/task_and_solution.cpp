/*
Выведите все четные элементы массива.

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу. Элементы выводятся в том же порядке, в котором они стояли в массиве.

Sample Input:
7
1 2 2 3 3 3 4

Sample Output:
2 2 4

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> nums;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        if (tmp % 2 == 0) {
            nums.push_back(tmp);
        }
    }

    for (int i: nums) {
        cout << i << " ";
    }

    return 0;

}
