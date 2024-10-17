#include <iostream>
#include <string>

class Dog {
public:
    Dog(std::string name) : name(name) {}

    void bark() {
        std::cout << name << " says: Woof!" << std::endl;
    }

private:
    std::string name;
};

int main() {
    Dog myDog("Buddy");
    myDog.bark();
    return 0;
}
