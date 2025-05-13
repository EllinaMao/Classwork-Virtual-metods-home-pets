#pragma once
#include "Animal.h"

class Cat : public Animal {
public:
    Cat() = default;
    explicit Cat(const string& name) : Animal(name) {}

    void Sound() const override {
        cout << "Meow! Meow!" << endl;
    }

    void Type() const override {
        cout << "Type: Cat" << endl;


    }

};
