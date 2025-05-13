#pragma once
#include "Animal.h"

class Hamster : public Animal {
public:
    explicit Hamster(const string& name) : Animal(name) {}

    void Sound() const override {
        cout << "Squeak! Squeak!" << endl;
    }

    void Type() const override {
        cout << "Type: Hamster" << endl;
        cout << string(15, '-') << endl;
    }
};
