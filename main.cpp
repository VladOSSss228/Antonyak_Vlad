#include <iostream>
#include <cmath>

using namespace std;

bool canFirstPlayerWin(int x1, int y1, int x2, int y2) {
    if (x1 == 0 || y1 == 0)
        return true;

    int distanceToSafePoint = min(abs(x1), abs(y1));
    int distanceToP2 = abs(x2 - x1) + abs(y2 - y1);
    return distanceToSafePoint <= (distanceToP2 + 1) / 2;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if (canFirstPlayerWin(x1, y1, x2, y2)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
