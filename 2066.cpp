#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    int mn = a - b - c;
    mn = min(mn, a - b * c);
    cout << mn << '\n';
    return 0;
}
