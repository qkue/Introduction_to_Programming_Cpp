/*
Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.

Формат входных данных
Задано единственное число N. (N ≤ 10)

Формат выходных данных
Выведите ответ на задачу.

Подсказка
Напишите рекурсивную функцию, которая пытается поставить ферзя в очередной столбец. Если на эту клетку ставить ферзя нельзя (он бьет предыдущих), то такой вариант даже не стоит рассматривать. Когда вы успешно поставили ферзя в последний столбец - увеличивайте счетчик.

Sample Input:
8

Sample Output:
92

*/

#include <iostream>
#include <vector>

using namespace std;

vector <vector <int>> table(12, vector <int> (12));
/*
0 = empty
1 = fill
*/
vector <vector <int>> figures(4, vector <int> (12, 299));
/*
строки в figures:
0 = x
1 = y
2 = x + y
3 = x - y
*/

int queen(int row, int col, int n, int cnt);
bool check (int x, int y);
void marking (int x, int y);
void unmarking (int x, int y);
void to_display();

int main() {
    int n;
    cin >> n;
    cout << queen(1, 1, n, 0);
}

void to_display() {
    for (int m = 0; m < table.size(); ++m) {
        for (int k = 0; k < table[m].size(); ++k) {
            cout << table[m][k] << " ";
        }
        cout << endl;
    }
    cout << "FINISHED THIS STEP" << endl;
}

int queen(int row, int col, int n, int cnt) {
    int answer = 0;
    for (int i = row; i <= n; i++) {
        //cout << "i " << i << endl;
        if (check(i, col)) {
            marking(i, col);
            ++cnt;
            //cout << "row " << row << " col " << col << " i " << i << endl;
            //to_display();

            if (col < n) {
                answer += queen(row, col + 1, n, cnt);
            } else if (col == n && n == cnt) {
                ++answer;
            }
            --cnt;
            unmarking(i, col);
        }
        //cout << "cicle over" << endl;
    }
    return answer;

}

bool check (int x, int y) {
    bool isAllowed = true;
    int to_check[] = {x, y, x + y, x - y};
    /*
    0 = x
    1 = y
    2 = x + y
    3 = x - y
    */
    for (int i = 0; i < figures.size(); i++) {
        for (int j = 0; j < figures[i].size(); j++) {
            /*
            cout << "Start figures " << endl;
            for (int z = 0; z < figures.size(); ++z) {
                for (int a = 0; a < figures[z].size(); ++a) {
                    cout << figures[z][a] << " ";
                }
                cout << endl;
            }
            cout << "THE END figures " << endl;
            */

            if (figures[i][j] == to_check[i]) {
                //cout << "false check " << endl;
                isAllowed = false;
            }
        }
    }
    return isAllowed;
}

void marking (int x, int y) {
    table[x][y] = 1;
    figures[0][y] = x;
    figures[1][y] = y;
    figures[2][y] = x + y;
    figures[3][y] = x - y;

}

void unmarking (int x, int y) {
    table[x][y] = 0;
    figures[0][y] = 299;
    figures[1][y] = 299;
    figures[2][y] = 299;
    figures[3][y] = 299;
}

