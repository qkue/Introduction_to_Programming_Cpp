/*
Вам дан словарь, состоящий из пар слов. Каждое слово является синонимом к парному ему слову. Все слова в словаре различны. Для одного данного слова определите его синоним.

Входные данные
Программа получает на вход количество пар синонимов N. Далее следует N строк, каждая строка содержит ровно два слова-синонима. После этого следует одно слово.

Выходные данные
Программа должна вывести синоним к данному слову.

Sample Input:
3
Hello Hi
Bye Goodbye
List Array
Goodbye

Sample Output:
Bye

*/

#include <iostream>
#include <map>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::map <std::string, std::string> dict;
    
    for (int i = 0; i < n; ++i) {
        std::string word_left, word_right;
        std::cin >> word_left >> word_right;
        dict[word_left] = word_right;
        dict[word_right] = word_left;
    }
    std::string question;
    std::cin >> question;
    std::cout << dict[question];
    
}
