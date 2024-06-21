/*
Выведите значение наименьшего из всех положительных элементов в массиве. Известно, что в массиве есть хотя бы один положительный элемент.

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
5
5 -4 3 -2 1

Sample Output:
1

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> nums(n);

    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int answer = -1;
    for (int i = 0; i < n; ++i) {
        //cout << "i = " << i << " nums " << nums[i] << endl;
        //cout << "if " << (nums[i] > 0) << " & " << (nums[i] < answer) << endl;
        if ((nums[i] > 0) && (answer == -1 || (nums[i] < answer))) {
            answer = nums[i];
        }
    }
    cout << answer;
    return 0;


}