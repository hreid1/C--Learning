#include <iostream>

class Animal {
public:
    virtual void sound() {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        std::cout << "Dog barks" << std::endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        std::cout << "Cat meows" << std::endl;
    }
};

void make_sound(Animal* animal) {
    animal->sound();
}

int main() {
    Dog dog;
    Cat cat;

    make_sound(&dog);
    make_sound(&cat);
    return 0;
}
