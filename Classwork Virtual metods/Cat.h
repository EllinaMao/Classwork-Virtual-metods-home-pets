#pragma once
#include "Animal.h"

class Cat : public Animal {
public:
    explicit Cat(const string& name) : Animal(name) {}

    void Sound() const override {
        cout << "Meow! Meow!" << endl;
    }

    void Type() const override {
        cout << "Type: Cat" << endl;
        cout << string(15, '-') << endl;

    }
};
