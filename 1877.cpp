#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int first{}, second{};
    std::cin >> first >> second;

    if (first % 2 == 0 || second % 2 == 1) {
        std::cout << "yes\n";
    } else {
        std::cout << "no\n";
    }
 
    return 0;
}
