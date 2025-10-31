#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int first, second;
    cin >> first >> second;
    if (!(first % 2) || (second % 2)) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }
    return 0;
}
