#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{}, k{};
    std::cin >> n >> k;

    int sides = n * 2;
    int time = (sides + k - 1) / k;

    std::cout << std::max(time, 2) << '\n';
    
    return 0;
}
