/*
Дан массив целых чисел. Если в нем есть два соседних элемента одного знака, выведите эти числа. Если соседних элементов одного знака нет - не выводите ничего. Если таких пар соседей несколько - выведите первую пару.

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива. Все числа отличны от нуля. 

Формат выходных данных
Выведите ответ на задачу. Элементы выводятся в порядке неубывания.

Sample Input:
5
-1 2 3 -1 -2

Sample Output:
2 3

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

    for (int i = 1; i < n; ++i) {
        if (nums[i] >= 0 && nums[i - 1] >= 0) {
            if (nums[i] > nums[i - 1]) {
                swap(nums[i], nums[i - 1]);
            }
            cout << nums[i] << " " << nums[i - 1];
            break;
        } else if (nums[i] < 0 && nums[i - 1] < 0) {
            if (nums[i] > nums[i - 1]) {
                swap(nums[i], nums[i - 1]);
            }
            cout << nums[i] << " " << nums[i - 1];
            break;
        }
    }
    return 0;

}
