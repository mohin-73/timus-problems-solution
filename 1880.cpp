#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int, int> mp;
    for (int i = 0; i < 2; ++i) {
        int n, x;
        cin >> n;
        while (n--) cin >> x, ++mp[x];
    }
    int n, x, ans = 0;
    cin >> n;
    while (n--) {
        cin >> x;
        if (mp[x] == 2) ans += 1;
    }
    cout << ans << '\n';
    return 0;
}
