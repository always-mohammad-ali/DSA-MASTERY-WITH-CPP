#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    const double PI = acos(-1.0);

    while (cin >> a >> b >> c) {
        double s = (a + b + c) / 2.0;

        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        double r = area / s;
        double R = (a * b * c) / (4.0 * area);

        double roses = PI * r * r;
        double violets = area - roses;
        double sunflowers = PI * R * R - area;

        cout << fixed << setprecision(4)
             << sunflowers << " "
             << violets << " "
             << roses << "\n";
    }

    return 0;
}