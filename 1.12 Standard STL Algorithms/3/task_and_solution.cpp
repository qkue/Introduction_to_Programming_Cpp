/*
Отсортируйте массив.

Входные данные
Первая строка входных данных содержит количество элементов в массиве N ≤ 10^5. Далее идет N целых чисел, не превосходящих по абсолютной величине 10^9.

Выходные данные
Выведите эти числа в порядке неубывания.

Sample Input:
5
5 4 3 2 1

Sample Output:
1 2 3 4 5

*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector <int> nums(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    for (int i : nums) {
        std::cout << i << " ";
    }

    return 0;
}
