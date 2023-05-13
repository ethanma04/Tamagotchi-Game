#include <iostream>
#include <string>
#include "Pet.hpp"

#ifndef BIRDH
#define BIRDH



class Bird : public Pet {
public:
    Bird();
    Bird(string newName);

    void fly();

    void feedPet();
    void playPet();
    void trickPet();
    void check();


    void printStats();
    void printMenu() const;


};

#endif