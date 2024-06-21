/*
Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.

Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:
5
0 1 2 3 4

Sample Output 1:
1

Sample Input 2:
5
2 4 6 8 10

Sample Output 2:
0

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
        if (tmp % 2) {
            nums.push_back(tmp);
        }
    }
    int answer = (nums.size() > 0 ? nums[0] : 0);
    for (int i = 0; i < nums.size(); ++i) {
        //cout << "i = " << i << " nums " << nums[i] << endl;
        //cout << "if " << (nums[i] > 0) << " & " << (nums[i] < answer) << endl;
        if (nums[i] < answer) {
            answer = nums[i];
        }
    }
    cout << answer;
    return 0;


}
