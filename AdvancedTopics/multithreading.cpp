#include <iostream>
#include <thread>

void print_numbers() {
    for (int i = 0; i < 5; i++) {
        std::cout << "Number: " << i << std::endl;
    }
}

int main() {
    std::thread t(print_numbers); // Create a new thread
    t.join(); // Wait for the thread to finish
    return 0;
}
