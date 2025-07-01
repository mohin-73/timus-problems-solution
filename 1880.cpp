#include <iostream>
#include <map>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{}, x{}, ans{};
    std::map<int, int> mp;

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> x;
        ++mp[x];
    }

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> x;
        ++mp[x];
    }

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> x;
        if (mp[x] == 2) ++ans;
    }

    std::cout << ans << '\n';

    return 0;
}
