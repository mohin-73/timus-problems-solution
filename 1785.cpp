#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n > 0 && n < 5) cout << "few\n";
    else if (n > 4 && n < 10) cout << "several\n";
    else if (n > 9 && n < 20) cout << "pack\n";
    else if (n > 19 && n < 50) cout << "lots\n";
    else if (n > 49 && n < 100) cout << "horde\n";
    else if (n > 99 && n < 250) cout << "throng\n";
    else if (n > 249 && n < 500) cout << "swarm\n";
    else if (n > 499 && n < 1000) cout << "zounds\n";
    else if (n > 999) cout << "legion\n";
    return 0;
}
