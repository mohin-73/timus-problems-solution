#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n > 0 && n < 5) cout << "few";
    else if (n > 4 && n < 10) cout << "several";
    else if (n > 9 && n < 20) cout << "pack";
    else if (n > 19 && n < 50) cout << "lots";
    else if (n > 49 && n < 100) cout << "horde";
    else if (n > 99 && n < 250) cout << "throng";
    else if (n > 249 && n < 500) cout << "swarm";
    else if (n > 499 && n < 1000) cout << "zounds";
    else if (n > 999) cout << "legion";
    return 0;
}
