#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#include <limits.h>
#include <unordered_set>

using namespace std;

void solve() {
    int n;
    vector<int> a;
    int b;
    int ans = INT_MIN;
    int temp = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> b;
        a.push_back(b);
    }

    if (a.size() < 2) {
        cout << a.size() << endl;
        return;
    }

    if (a.size() == 2) {
        if (a[0] < a[1]) {
            cout << 2 << endl;
            return;
        } else {
            cout << 1 << endl;
            return;
        }
    }

    for (int i = 0; i < a.size() - 1; i++) {
        temp = 1;
        int current = i;

            while (a[current + 1] > a[current] && current < a.size() - 1) {
                temp++;
                current++;
            }

        if (temp > ans) {
            ans = temp;
        }
    }

    cout << ans << endl;
}

int main() {
    solve();
}