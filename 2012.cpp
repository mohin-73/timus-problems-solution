#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int f{};
    std::cin >> f;

    if ((12 - f) * 45 <= 240) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
 
    return 0;
}
