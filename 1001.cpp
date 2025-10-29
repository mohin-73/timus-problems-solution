#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long num;
    stack<long double> root;
    while (cin >> num) {
        root.push(sqrt(num));
    }
    while (!root.empty()) {
        cout << fixed << setprecision(4);
        cout << root.top() << '\n';
        root.pop();
    }
    return 0;
}
