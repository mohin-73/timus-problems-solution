#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int sides = n * 2;
    int time = (sides + k - 1) / k;
    cout << max(time, 2) << '\n';
    return 0;
}
