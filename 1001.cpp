#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long num;
    stack<double> root;
    while (cin >> num) {
        root.push(sqrt(num));
    }
    cout << fixed << setprecision(4);
    while (!root.empty()) {
        cout << root.top() << '\n';
        root.pop();
    }
    return 0;
}
