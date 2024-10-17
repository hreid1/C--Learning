#include <iostream>

class Animal {
public:
    virtual void sound() = 0; // Pure virtual function
};

class Lion : public Animal {
public:
    void sound() override {
        std::cout << "Lion roars" << std::endl;
    }
};

int main() {
    Lion myLion;
    myLion.sound();
    return 0;
}
