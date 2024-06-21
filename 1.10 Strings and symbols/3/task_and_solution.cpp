/*
По введенному символу определите, является ли он цифрой.

Входные данные
Вводится единственый символ.

Выходные данные
Выведите "yes", если символ является цифрой и "no" в противном случае. Обратите внимание, что слова нужно выводить маленькими буквами.

Sample Input 1:
1

Sample Output 1:
yes

Sample Input 2:
a

Sample Output 2:
no

*/

#include <iostream>

int main() {
    char t;
    std::cin >> t;

    if (t >= '0' and t <= '9') {
        std::cout << "yes";
    } else {
        std::cout << "no";
    }

}
