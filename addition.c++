#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    std::cout << add(x, y) << std::endl;
    return 0;
}