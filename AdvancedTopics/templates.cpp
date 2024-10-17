#include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "Int Addition: " << add(5, 10) << std::endl;         // Calls add<int>
    std::cout << "Double Addition: " << add(5.5, 10.5) << std::endl; // Calls add<double>
    return 0;
}
