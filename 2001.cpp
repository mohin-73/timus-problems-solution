#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a1{}, b1{}, a2{}, b2{}, a3{}, b3{};
    std::cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    int a{}, b{};
    a = a1 - a3;
    b = b1 - b2;

    std::cout << a << " " << b << '\n';
    
    return 0;
}
