/*
Выведите все исходные точки в порядке возрастания их расстояний от начала координат. 

Входные данные
Программа получает на вход набор точек на плоскости. Сначала задано количество точек n, затем идет последовательность из n строк, каждая из которых содержит два числа: координаты точки. Величина n не превосходит 100, все исходные координаты – целые числа, не превосходящие 10^3.

Выходные данные
Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала координат.

Sample Input:
2
1 2
2 3

Sample Output:
1 2
2 3

*/

#include <iostream>
#include <vector>
#include <algorithm>

struct points {
    int x;
    int y;
};

bool cmp (points a, points b);

int main() {
    int n;
    std::cin >> n;
    std::vector <points> nums(n);

    for (int i = 0; i < n; ++i) {
        int first, second;
        std::cin >> first >> second;
        points temp_struct;
        temp_struct.x = first;
        temp_struct.y = second;
        nums[i] = temp_struct;
    }
    sort(nums.begin(), nums.end(), cmp);
    for (points coord : nums) {
        std::cout << coord.x << " " << coord.y << "\n";
    }

    return 0;
}


bool cmp (points a, points b) {
    return (a.x * a.x + a.y * a.y) < (b.x * b.x + b.y * b.y);
}
