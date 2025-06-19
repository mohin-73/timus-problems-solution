#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{};
    std::cin >> n;

    if (n > 0 && n < 5) {
        std::cout << "few\n";
    } else if (n > 4 && n < 10) {
        std::cout << "several\n";
    } else if (n > 9 && n < 20) {
        std::cout << "pack\n";    
    } else if (n > 19 && n < 50) {
        std::cout << "lots\n";
    } else if (n > 49 && n < 100) {
        std::cout << "horde\n";
    } else if (n > 99 && n < 250) {
        std::cout << "throng\n";
    } else if (n > 249 && n < 500) {
        std::cout << "swarm\n";
    } else if (n > 499 && n < 1000) {
        std::cout << "zounds\n";
    } else if (n > 999) {
        std::cout << "legion\n";
    }
 
    return 0;
}
