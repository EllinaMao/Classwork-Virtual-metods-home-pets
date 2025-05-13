#pragma once


#include "Animal.h"

class Dog : public Animal {
public:
    explicit Dog(const string& name) : Animal(name) {}

    void Sound() const override {
        cout << "Woof! Woof!" << endl;
    }

    void Type() const override {
        cout << "Type: Dog" << endl;
        cout << string(15, '-') << endl;

    }
};
