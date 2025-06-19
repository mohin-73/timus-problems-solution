#include <iostream>
#include <stack>
#include <cmath>
#include <iomanip>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long num{};
    std::stack<double> sqr;

    while (std::cin >> num) {
        sqr.push(std::sqrt(num));
    }

    while (!sqr.empty()) {
        std::cout << std::fixed << std::setprecision(4) << sqr.top() << '\n';
        sqr.pop();
    }

    return 0;
}
