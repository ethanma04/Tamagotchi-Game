#include "Dog.hpp"

Dog::Dog() {
    hunger = 70;
    sleep = 40;
    bored = 30;
    happy = 50;

}

Dog::Dog(string newName) {

    hunger = 70;
    sleep = 40;
    bored = 30;
    happy = 50;
    name = newName;
}

void Dog::feedPet() {
    hunger -= 30;
    sleep += 15;
    happy += 10;
    cout << "=================================================" << endl;
    cout << name << " seems pretty full after that meal!" << endl;
    cout << "=================================================" << endl;
    cout << endl;
    check();

}

void Dog::playPet() {
    hunger += 15;
    sleep -= 15;
    bored -= 25;
    happy += 25;
    cout << "=================================================" << endl;
    cout << "You played catch with " << name << ". How fun!" << endl;
    cout << "=================================================" << endl;
    cout << endl;
    check();
}

void Dog::trickPet() {
    hunger -= 5;
    bored += 25;
    sleep += 15;
    happy -= 10;
    cout << "=================================================" << endl;
    cout << "You taught " << name << " how to close the door!" << endl;
    cout << "=================================================" << endl;
    cout << endl;
    check();
}

void Dog::newToy() {
    bored -= 20;
    sleep -= 15;
    happy += 20;
    cout << "=================================================" << endl;
    cout << "You gave " << name << " a new toy dinosaur. Cute!" << endl;
    cout << "=================================================" << endl;
    cout << endl;
    check();
}

void Dog::check() {
    if(hunger > 74) {
        cout << "=================================================" << endl;
        cout << name << " seems to be hungry." << endl;
        cout << "=================================================" << endl;
        cout << endl;
    }
    if(sleep > 49) {
        cout << "=================================================" << endl;
        cout << name << " seems to be a little sleepy" << endl;
        cout << "=================================================" << endl;
        cout << endl;
    }
    if(bored > 49) {
        cout << "=================================================" << endl;
        cout << name << " does not look too entertained." << endl;
        cout << "=================================================" << endl;
        cout << endl;
    }
    if(happy < 40) {
        cout << "=================================================" << endl;
        cout << name << " looks a little sad." << endl;
        cout << "=================================================" << endl;
        cout << endl;
    }
}


void Dog::printStats() {
    cout << "     _____   " << endl;
    cout << "    /     \\  " << endl;
    cout << "   /       \\ " << endl;
    cout << "  |  ʕ•ᴥ•ʔ  |" << endl;
    cout << "  |  -| |-  |" << endl;
    cout << "   \\________/" << endl;
    cout << endl << "=================================================" << endl;
    cout << " Here are " << getName() << "'s stats: " << endl;
    cout << " Hunger: " << getHunger() << endl;
    cout << " Sleep: " << getSleep() << endl;
    cout << " Boredom: " << getBored() << endl;
    cout << " Happiness: " << getHappy() << endl;

    cout << "=================================================" << endl;
   

}

void Dog::printMenu() const {
    cout << endl << "=================================================" << endl;
    cout << "Select a Number: " << endl;
    cout << "1- Feed" << endl;
    cout << "2- Play" << endl;
    cout << "3- Trick" << endl;
    cout << "4 - Give a New Toy" << endl;
    cout << "5 - Exit" << endl;
    cout << "=================================================" << endl;
    cout << endl;
}

