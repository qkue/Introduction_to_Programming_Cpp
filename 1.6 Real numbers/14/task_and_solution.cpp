/*


*/

#include <iostream>
#include <cmath>
using namespace std;

double eps = 0.000001;
double norm(double x) {
    return fabs(x) <= eps ? 0 : x;
}

int main() {
    double a, b, c, d, e, f, x, y, n , k;
    cin >> a >> b >> c >> d >> e >> f;
    double D, Dx, Dy;
    D = a * d - b * c;
    Dx = e * d - b * f;
    Dy = a * f - e * c;
    if (D != 0) {
        cout << 2 << ' ' << norm(Dx / D) << ' ' << norm(Dy / D) << endl;
    } else {
        if (Dx == 0 && Dy == 0) {
            if (a == 0 && b == 0 && c == 0 && d == 0) {
                if (e != 0 || f != 0) {
                    cout << 0 << endl;
                } else {
                    cout << 5 << endl;
                }
            } else {
                if (a == 0 && c == 0) {
                    if (b != 0) {
                        y = e / b;
                        cout << 4 << ' ' << y << endl;
                    } else {
                        y = f / d;
                        cout << 4 << ' ' << y << endl;
                    }
                } else {
                    if (b == 0 && d == 0) {
                        if (a != 0) {
                            x = e / a;
                            cout << 3 << ' ' << x << endl;
                        } else {
                            x = f / c;
                            cout << 3 << ' ' << x << endl;
                        }
                    } else {
                        if (b != 0) {
                            n = e / b;
                            k = -a / b;
                            cout << 1 << ' ' << k << ' ' << n << endl;
                        } else {
                            n = f / d;
                            k = -c / d;
                            cout << 1 << ' ' << k << ' ' << n << endl;
                        }
                    }
                }
            }
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}