#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int k{}, n{}, s{}, x{};
    std::cin >> k >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> x;
        s += x;
        s -= k;
        s = std::max(0, s);
    }

    std::cout << s << '\n';
    
    return 0;
}
