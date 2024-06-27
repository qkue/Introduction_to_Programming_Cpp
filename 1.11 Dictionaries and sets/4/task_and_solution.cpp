/*
Во входной строке записана последовательность чисел через пробел. Для каждого числа выведите слово YES (в отдельной строке), если это число ранее встречалось в последовательности или NO, если не встречалось.

Входные данные
Вводится число N - количество элементов списка, а затем N чисел.

Выходные данные
Выведите ответ на задачу.

Sample Input:
6
1 2 3 2 3 4

Sample Output:
NO
NO
NO
YES
YES
NO

*/

#include <iostream>
#include <set>

int main() {
    int n;
    std::cin >> n;
    std::set <int> numbers;

    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        if (numbers.find(num) == numbers.end()) {
            std::cout << "NO" << "\n";
        } else {
            std::cout << "YES" << "\n";
        }
        numbers.insert(num);
    }
}
