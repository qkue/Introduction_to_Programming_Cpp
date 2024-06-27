/*
Выведите фамилии и имена учащихся в порядке убывания их среднего балла.

Входные данные
Заданы сначала количество учащихся n, затем n строк, каждая из которых содержит фамилию, имя и три числа (оценки по трем предметам: математике, физике, информатике). Данные в строке разделены одним пробелом. Оценки принимают значение от 1 до 5.

Выходные данные
Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом. Выводить оценки не нужно. Если несколько учащихся имеют одинаковые средние баллы, то их нужно выводить в порядке, заданном во входных данных.

Sample Input:
3
Markov Valeriy 5 5 5
Sergey Petrov 1 1 1
Petrov Petr 3 3 3

Sample Output:
Markov Valeriy
Petrov Petr
Sergey Petrov

*/

#include <iostream>
#include <vector>
#include <algorithm>

struct student {
    std::string name;
    std::string last_name;
    double ball;
};

bool cmp (student a, student b);

int main() {
    int n;
    std::cin >> n;
    std::vector <student> nums(n);

    for (int i = 0; i < n; ++i) {
        std::string f_name, la_name;
        int obj_1, obj_2, obj_3;
        std::cin >> f_name >> la_name >> obj_1 >> obj_2 >> obj_3;
        student temp_struct;
        temp_struct.name = f_name;
        temp_struct.last_name = la_name;
        temp_struct.ball = (obj_1 + obj_2 + obj_3) / 3.0;
        nums[i] = temp_struct;
    }
    stable_sort(nums.begin(), nums.end(), cmp);
    for (student person : nums) {
        std::cout << person.name << " " << person.last_name << "\n";
    }

    return 0;
}


bool cmp (student a, student b) {
    return a.ball > b.ball;
}
