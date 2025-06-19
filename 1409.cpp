#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{}, m{};
    std::cin >> n >> m;

    std::cout << m - 1 << " " << n - 1 << '\n';

    return 0;
}
