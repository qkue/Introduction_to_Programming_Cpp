/*
Во время проведения олимпиады каждый из участников получил свой идентификационный номер – натуральное число. Необходимо отсортировать список участников олимпиады по количеству набранных ими баллов.

Входные данные
На первой строке дано число N (1 ≤ N ≤ 1000) – количество участников. На каждой следующей строке даны идентификационный номер и набранное число баллов соответствующего участника. Все числа во входном файле не превышают 10^5.

Выходные данные
В выходной файл выведите исходный список в порядке убывания баллов. Если у некоторых участников одинаковые баллы, то их между собой нужно упорядочить в порядке возрастания идентификационного номера.

Sample Input 1:
3
101 80
305 90
200 14

Sample Output 1:
305 90
101 80
200 14

Sample Input 2:
3
20 80
30 90
25 90

Sample Output 2:
25 90
30 90
20 80

*/

#include <iostream>
#include <vector>
#include <algorithm>

struct balls {
    int id;
    int ball;
};

bool cmp (balls a, balls b);

int main() {
    int n;
    std::cin >> n;
    std::vector <balls> nums(n);

    for (int i = 0; i < n; ++i) {
        int first, second;
        std::cin >> first >> second;
        balls temp_struct;
        temp_struct.id = first;
        temp_struct.ball = second;
        nums[i] = temp_struct;
    }
    sort(nums.begin(), nums.end(), cmp);
    for (balls participant : nums) {
        std::cout << participant.id << " " << participant.ball << "\n";
    }

    return 0;
}


bool cmp (balls a, balls b) {
     return ((a.ball > b.ball) || (a.ball == b.ball && a.id < b.id));
}
