//Pet.h
#include <iostream>
#include <string>

using namespace std;

#ifndef PETH
#define PETH

class Pet {
protected:
    int hunger;
    int sleep;
    int bored;
    int happy;
    string name;
public:
    Pet();
    Pet(string newName);
    void feedPet();
    void playPet();
    void trickPet();
    void nextHour();

    void setName(string );
    void setHunger(int);
    void setSleep(int);
    void setBored(int);
    void setHappy(int);

    void check();
    string getName();
    int getHunger();
    int getSleep();
    int getBored();
    int getHappy();

    virtual void printStats();
    virtual void printMenu() const;

};

#endif