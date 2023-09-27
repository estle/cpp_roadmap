#include<iostream>

class Animal {
public:
    virtual void makeSound() {
        std::cout << "The Animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Dog barks!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Cat meows!" << std::endl;
    }
};

int main() {
    Animal *animals[2] = {new Dog, new Cat};
    animals[0]->makeSound(); // Output: Dog barks!
    animals[1]->makeSound(); // Output: Cat meows!
}