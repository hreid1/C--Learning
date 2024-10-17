#include <iostream>

class Animal {
public:
    void sound() {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        std::cout << "Cat says: Meow" << std::endl;
    }
};

int main() {
    Cat myCat;
    myCat.sound();
    return 0;
}
