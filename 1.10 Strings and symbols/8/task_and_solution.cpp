/*
Найдите в данной строке самое длинное слово и выведите его.

Входные данные
Вводится одна строка. Слова в ней отделены одним пробелом.

Выходные данные
Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.

Sample Input:
Everyone of us has all we need

Sample Output:
Everyone

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    getline(cin, text);
    text.push_back(' ');
    int max_length = 0;
    int word_s = 0, word_end = 0;
    int left = 0, right = 0;

    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            if (max_length < right - left + 1) {
                max_length = right - left + 1;
                word_s = left;
                word_end = right;
            }
            left = i + 1;

        } else {
            right = i;
        }
    }

    string answer = text.substr(word_s, word_end - word_s + 1);
    cout << answer;

    return 0;
}