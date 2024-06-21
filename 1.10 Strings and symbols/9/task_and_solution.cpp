/*
В сети интернет каждому компьютеру присваивается четырехбайтовый код, который принято записывать в виде четырех чисел, каждое из которых может принимать значения от 0 до 255, разделенных точками. Вот примеры правильных IP-адресов:
127.0.0.0
192.168.0.1
255.0.255.255
Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.

Входные данные
Программа получает на вход строку из произвольных символов.

Выходные данные
Если эта строка является корректной записью IP-адреса, выведите YES, иначе выведите NO.

Примечание

Для перевода из строки в число удобно пользоваться функцией stoi, которая принимает на вход строку, а возвращает число.

Sample Input:
127.0.0.1

Sample Output:
YES

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    getline(cin, text);
    text.push_back('.');
    //int max_length = 0;
    //int word_s = 0, word_end = 0;
    ///int left = 0, right = 0;
    int cnt = 0;
    string number = "";
    int cnt_point = 0;
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == '.') {
            cnt_point++;
        }

        if ((text[i] < '0' || text[i] > '9') && text[i] != '.')  {
            cout << "NO";
            return 0;
        } else if ((text[i] >= '0' && text[i] <= '9')) {
            number.push_back(text[i]);
        } else if (text[i] == '.' && number.length() > 0) {
            int num = stoi(number);
            if ((num < 0  || num > 255)) {
                cout << "NO";
                return 0;
            }
            cnt++;
            number.clear();
        }
    }

    //string answer = text.substr(word_s, word_end - word_s + 1);
    if (cnt == 4 && cnt_point == 4) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
