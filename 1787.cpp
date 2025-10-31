#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, n, x;
    cin >> k >> n;
    int s = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        s = max(s + x - k, 0);
    }
    cout << s << '\n';
    return 0;
}
