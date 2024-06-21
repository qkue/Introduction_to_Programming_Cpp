/*


*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector <int> skittles(n + 1);
    
    int left, right;
    for (int i = 0; i < k; ++i) {
        cin >> left >> right;
        
        for (int s = left; s <= right; ++s) {
            skittles[s] = 1;
        }
    }
    
    for (int s = 1; s <= n; ++s) {
        if (skittles[s] == 0) {
            cout << 'I';
        } else {
            cout << '.';
        }
    }
    
    return 0;
}
