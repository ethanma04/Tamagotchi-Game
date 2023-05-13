#include <iostream>
#include <string>
#include "Pet.hpp"

#ifndef FISHH
#define FISHH



class Fish : public Pet {
public:
    Fish();
    Fish(string newName);

    void cleanTank();

    void feedPet();
    void playPet();
    void trickPet();
    void check();


    void printStats();
    void printMenu() const;


};

#endif