/*
Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.

Формат входных данных
Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.

Формат выходных данных
Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.

Sample Input 1:
1 7
2 4
3 2
4 8
5 6
6 1
7 3
8 5

Sample Output 1:
NO

Sample Input 2:
1 8
2 7
3 6
4 5
5 4
6 3
7 2
8 1

Sample Output 2:
YES

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int magic = 8;
    vector <int> rows(magic);
    vector <int> cols(magic);
    bool isFight = false;
    
    for (int i = 0; i < magic; ++i) {
        cin >> rows[i];
        cin >> cols[i];
    }
    /*
    for (int i = 0; i < magic; ++i) {
        cout << "i = " << i << " rows = " << rows[i] << " cols = " << cols[i] << endl;
    }
    */
    
    for (int i = 0; i < magic; ++i) {
        int queen_x = rows[i];
        int queen_y = cols[i];
        
        for (int j = 0; j < magic; ++j) {
            if (i == j) {
                continue;
            }
            int enemy_x = rows[j];
            int enemy_y = cols[j];
            if ((queen_x == enemy_x) || (queen_y == enemy_y)) {
                
                isFight = true;
                break;
            } else if (queen_x + queen_y == enemy_x + enemy_y) {
                //cout << 2 << endl;
                isFight = true;
                break;
            } else if ((queen_x - queen_y) == (enemy_x - enemy_y)) {
                //cout << queen_x << "x y" << queen_y << " " << enemy_x << endl;
                isFight = true;
                break;
            }
        
        }
        if (isFight) {
            break;
        }
    }    
    if (isFight) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
