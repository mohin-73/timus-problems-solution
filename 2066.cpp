#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a{}, b{}, c{};
    std::cin >> a >> b >> c;
    
    int mn = a - b - c;
    mn = std::min(mn, a - b * c);

    std::cout << mn << '\n';
 
    return 0;
}
