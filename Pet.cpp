#include "Pet.hpp"


Pet::Pet() {
    hunger = 50;
    sleep = 50;
    bored = 50;
    happy = 50;
    name = "";
}

Pet::Pet(string newName) {
    name = newName;
    hunger = 50;
    sleep = 50;
    bored = 50;
    happy = 50;
}

void Pet::feedPet() {
    hunger -= 20;
    sleep += 20;
    happy += 10;
}

void Pet::playPet() {
    hunger += 15;
    sleep -= 20;
    happy += 20;

}

void Pet::trickPet() {
    hunger -= 10;
    bored += 25;
    sleep -= 10;
    happy -= 10;
}

void Pet::nextHour() {
    hunger += 15;
    bored += 15;
    sleep += 15;
    happy -= 15;
    cout << "An hour has the passed. " << getName() << "'s stats will be updated....." << endl << endl;
}

void Pet::setName(string _name) {
    name = _name;
}

void Pet::setHunger(int _hunger) {
    hunger = _hunger;
}

void Pet::setSleep(int _sleep) {
    sleep = _sleep;
}

void Pet::setBored(int _bored) {
    bored = _bored;
}

void Pet::setHappy(int _happy) {
    happy = _happy;
}

void Pet::check() {
    if(hunger > 74) {
        cout << name << " is hungry." << endl;
    }
    if(sleep > 49) {
        cout << name << " is sleepy." << endl;
    }
    if(bored > 49) {
        cout << name << " is bored." << endl;
    }
    if(happy > 49) {
        cout << name << " is happy." << endl;
    }
}

string Pet::getName() {
    return name;
}

int Pet::getHunger() {
    return hunger;
}

int Pet::getSleep() {
    return sleep;
}

int Pet::getBored() {
    return bored;
}

int Pet::getHappy() {
    return happy;
}

void Pet::printStats() {
    cout << "=================================================" << endl;
    cout << " Here are " << getName() << "'s stats: " << endl;
    cout << " Hunger: " << getHunger() << endl;
    cout << " Sleep: " << getSleep() << endl;
    cout << " Boredom: " << getBored() << endl;
    cout << " Happiness: " << getHappy() << endl;
    cout << "=================================================" << endl;
   

}

void Pet::printMenu() const {
    cout << "Select a Number: " << endl;
    cout << "1- Feed" << endl;
    cout << "2- Play" << endl;
    cout << "3- Trick" << endl;
    cout << "4 - Exit" << endl;
    cout << endl;
}