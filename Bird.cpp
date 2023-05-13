#include "Bird.hpp"

Bird::Bird() {
    hunger = 50;
    sleep = 25;
    bored = 40;
    happy = 40;

}

Bird::Bird(string newName) {

    hunger = 50;
    sleep = 25;
    bored = 40;
    happy = 40;
    name = newName;
}

void Bird::feedPet() {
    hunger -= 30;
    sleep += 15;
    happy += 10;
    cout << "=================================================" << endl;
    cout << "You fed " << name << " some highly nutritious worms. Yum." << endl;
    cout << "=================================================" << endl;
    cout << endl;
    check();
}

void Bird::playPet() {
    hunger += 15;
    sleep -= 15;
    bored -= 25;
    happy += 25;
    cout << "=================================================" << endl;
    cout << "You tried to race " << name << ". Fun fact: You lost." << endl;
    cout << "=================================================" << endl;
    cout << endl;
    check();
}

void Bird::trickPet() {
    hunger -= 5;
    bored += 25;
    sleep += 15;
    happy -= 10;
    cout << "=================================================" << endl;
    cout << "You taught " << name << " how to get fly in a circle!" << endl;
    cout << "=================================================" << endl;
    cout << endl;
    check();
}

void Bird::fly() {
    bored -= 20;
    sleep -= 15;
    happy += 20;
    cout << "=================================================" << endl;
    cout << name << " flew at monster speeds today. So cool!" << endl;
    cout << "=================================================" << endl;
    cout << endl;
    check();
}

void Bird::check() {
    if(hunger > 59) {
        cout << "=================================================" << endl;
        cout << name << " seems to be hungry." << endl;
        cout << "=================================================" << endl;
        cout << endl;
    }
    if(sleep > 64) {
        cout << "=================================================" << endl;
        cout << name << " seems to be a little sleepy" << endl;
        cout << "=================================================" << endl;
        cout << endl;
    }
    if(bored > 59) {
        cout << "=================================================" << endl;
        cout << name << " does not look too entertained." << endl;
        cout << "=================================================" << endl;
        cout << endl;
    }
    if(happy < 35) {
        cout << "=================================================" << endl;
        cout << name << " looks a little sad." << endl;
        cout << "=================================================" << endl;
        cout << endl;
    }
}

void Bird::printStats() {
    cout << "     _____   " << endl;
    cout << "    /     \\  " << endl;
    cout << "   /  ,_   \\ " << endl;
    cout << "  |  >' )   |" << endl;
    cout << "  |   ( ( \\ |" << endl;
    cout << "  \\________/" << endl;

    cout << endl << "=================================================" << endl;
    cout << " Here are " << getName() << "'s stats: " << endl;
    cout << " Hunger: " << getHunger() << endl;
    cout << " Sleep: " << getSleep() << endl;
    cout << " Boredom: " << getBored() << endl;
    cout << " Happiness: " << getHappy() << endl;

    cout << "=================================================" << endl;
   

}

void Bird::printMenu() const {
    cout << endl << "=================================================" << endl;
    cout << "Select a Number: " << endl;
    cout << "1- Feed" << endl;
    cout << "2- Play" << endl;
    cout << "3- Trick" << endl;
    cout << "4 - Fly" << endl;
    cout << "5 - Exit" << endl;
    cout << "=================================================" << endl;
    cout << endl;
}