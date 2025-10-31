#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int cost = 200 + n * 100;
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        if (str.find('+') != string::npos) {
            cost += 100;
        }
    }
    if (cost == 1300) {
        cost += 100;
    }
    cout << cost << '\n';
    return 0;
}
