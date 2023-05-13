#include <iostream>
#include <string>
#include "Pet.hpp"

#ifndef DOGH
#define DOGH



class Dog : public Pet {
public:
    Dog();
    Dog(string newName);

    void newToy();

    void feedPet();
    void playPet();
    void trickPet();
    void check();


    void printStats();
    void printMenu() const;


};

#endif