#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{};
    std::cin >> n;

    int cost = 200 + n * 100;

    while (n--) {
        std::string str{};
        std::cin >> str;
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == '+') {
                cost += 100;
                break;
            }
        }
    }

    if (cost == 1300){
        cost += 100;
    }

    std::cout << cost << '\n';
 
    return 0;
}
