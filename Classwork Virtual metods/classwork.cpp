#include <iostream>
#include <string>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Parrot.h"
#include "Humster.h"

using namespace std;

int main()
{
    size_t size = 5;
	Animal** arr_anim = new Animal * [size];

    arr_anim[0] = new Dog("Nastya");
    arr_anim[1] = new Cat("Natasha");
    arr_anim[2] = new Parrot("Kostya");
    arr_anim[3] = new Hamster("Dima");
    arr_anim[4] = new Animal();
    
        for (size_t i = 0; i < size; i++)
        {
            arr_anim[i]->Show();
            arr_anim[i]->Sound();
            arr_anim[i]->Type();
        }
    ///  Sound(); Show();  Type();  virtual,  перевизначеними в дочірніх класах

        for (size_t i = 0; i < size; i++) {
            delete[] arr_anim[i];
        }
        delete[] arr_anim;



}

