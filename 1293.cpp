#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{}, a{}, b{};
    std::cin >> n >> a >> b;

    std::cout << 2 * n * a * b << '\n';

    return 0;
}
