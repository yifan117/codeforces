#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void solve() {
    int n;
    vector<int> a;
    vector<int> sorted;
    vector<int> ans;
    int b;
    bool found = false;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b;
        a.push_back(b);
    }

    if (a.size() == 1) {
        cout << -1 << endl;
        return;
    }

    sorted = a;

    sort(sorted.begin(), sorted.end());

    while (!found) {
        for (int i = 0; i < sorted.size(); i++) {
            if (sorted[i] == a[i]) {
                break;
            }

            if (i == sorted.size() - 1 && sorted[i] != a[i]) {
                found = true;
            }
        }

        if (found) {
            break;
        }

        next_permutation(sorted.begin(), sorted.end());
    }

    for (auto x : sorted) {
        cout << x << " ";
    }

    cout << "\n";
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        solve();
    }

    return 0;
}