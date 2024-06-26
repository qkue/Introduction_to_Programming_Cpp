/*
Однажды, разбирая старые книги на чердаке, школьник Вася нашёл англо-латинский словарь. Английский он к тому времени знал в совершенстве, и его мечтой было изучить латынь. Поэтому попавшийся словарь был как раз кстати.

К сожалению, для полноценного изучения языка недостаточно только одного словаря: кроме англо-латинского необходим латинско-английский. За неимением лучшего он решил сделать второй словарь из первого.

Как известно, словарь состоит из переводимых слов, к каждому из которых приводится несколько слов-переводов. Для каждого латинского слова, встречающегося где-либо в словаре, Вася предлагает найти все его переводы (то есть все английские слова, для которых наше латинское встречалось в его списке переводов), и считать их и только их переводами этого латинского слова.

Помогите Васе выполнить работу по созданию латинско-английского словаря из англо-латинского.

Входные данные
В первой строке содержится единственное целое число N — количество английских слов в словаре. Далее следует N описаний. Каждое описание содержится в отдельной строке, в которой записано сначала английское слово, затем отделённый пробелами дефис (символ номер 45), затем разделённые запятыми с пробелами переводы этого английского слова на латинский. Переводы отсортированы в лексикографическом порядке. Порядок следования английских слов в словаре также лексикографический.

Все слова состоят только из маленьких латинских букв, длина каждого слова не превосходит 15 символов. Общее количество слов на входе не превышает 100000.

Выходные данные
В первой строке программа должна вывести количество слов в соответствующем данному латинско-английском словаре. Со второй строки выведите сам словарь, в точности соблюдая формат входных данных. В частности, первым должен идти перевод лексикографически минимального латинского слова, далее — второго в этом порядке и т.д. Внутри перевода английские слова должны быть также отсортированы лексикографически.

Sample Input:
3
apple - malum, pomum, popula
fruit - baca, bacca, popum
punishment - malum, multa

Sample Output:
7
baca - fruit
bacca - fruit
malum - apple, punishment
multa - punishment
pomum - apple
popula - apple
popum - fruit

*/

#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    string temp;
    getline(cin, temp);
    map <string, set <string>> dict;

    for (int i = 0; i < n; ++i) {
        string text;
        //cout << 1;
        getline(cin, text);
        //cout << 2;
        int pos_of_delim = text.find("-");
        int last_find = pos_of_delim;
        string value = text.substr(0, pos_of_delim - 1);
        //cout << "value find = " << value << "\n";
        while (pos_of_delim != -1) {
            int first_char = last_find + 2;
            pos_of_delim = text.find(",", last_find + 1);
            last_find = pos_of_delim;
            if (pos_of_delim == -1) {
                last_find = text.size();
            }
            string key = text.substr(first_char, last_find - first_char);
            //cout << "key find = " << key << "\n";
            //if (dict.find(key) == dict.end()) {
             //   dict[key] = std::set <std::string>;
            //}
            dict[key].insert(value);
        }
    }
    cout << dict.size() << "\n";
    for (auto now : dict) {
        std::cout << now.first << " - ";
        int cnt = 0;
        for (auto subnow : now.second) {
            cout << subnow;
            ++cnt;
            if (cnt != now.second.size()) {
                cout << ", ";
            }
        }
        cout << "\n";
        /*
        for (auto i = now.second.begin(); i != now.second.end(); ++i) {
            if (i == now.second.size() - 1) {
                cout << *i;
            } else {
                cout << *i << ", ";
            }
        }
        */

        /*
        for (auto subnow : now.second) {
            std::cout << subnow << ", ";
        }
        cout << "\n";
        */
    }

}
