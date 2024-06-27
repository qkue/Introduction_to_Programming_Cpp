/*
Даны два списка чисел, которые могут содержать до 100000 чисел каждый. Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.

Входные данные
Вводится число N - количество элементов первого списка, а затем N чисел первого списка. 
Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.

Выходные данные
Выведите ответ на задачу.

Sample Input:
3
1 3 2
3
4 3 2
Sample Output:
2

*/

#include <iostream>
#include <set>

int main() {
    int n;
    std::set <int> array_one, array_two;

    int num;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        array_one.insert(num);
    }

    int answer = 0;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        if (array_one.find(num) != array_one.end()) {
            answer++;
        }
    }
    std::cout << answer;
}
