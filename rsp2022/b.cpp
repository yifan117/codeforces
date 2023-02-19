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
    int count = 0;
    unordered_set<int> s;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> b;
        a.push_back(b);
    }

    for (int i = 0; i < a.size(); i++) {
        s.insert(a[i]);
    }

    if (s.size() == 1) {
        cout << 1 << endl;
        return;
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

    for (int i = 0; i < a.size(); i++) {
        count++;
        if (a[i] >= a[i+1]) {
            if (count > ans) {
                ans = count;
            }
            count = 0;
        }
    }

    if (count > ans) {
        ans = count;
    }

    cout << ans << endl;
}

int main() {
    solve();
}