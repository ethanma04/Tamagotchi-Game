#include "Fish.hpp"

Fish::Fish() {
    hunger = 35;
    sleep = 50;
    bored = 60;
    happy = 40;

}

Fish::Fish(string newName) {

    hunger = 35;
    sleep = 50;
    bored = 60;
    happy = 40;
    name = newName;
}

void Fish::feedPet() {
    hunger -= 30;
    sleep += 15;
    happy += 10;
    cout << "=================================================" << endl;
    cout << name << " munched on the yummy Krabby Patty." << endl;
    cout << "=================================================" << endl;
    cout << endl;
    check();

}

void Fish::playPet() {
    hunger += 15;
    sleep -= 15;
    bored -= 25;
    happy += 25;
    cout << "=================================================" << endl;
    cout << name << " swam around the fish tank with joy!" << endl;
    cout << "=================================================" << endl;
    cout << endl;
    check();
}

void Fish::trickPet() {
    hunger -= 5;
    bored += 25;
    sleep += 15;
    happy -= 10;
    cout << "=================================================" << endl;
    cout << "You had " << name << " follow a flashlight. Pretty cool!" << endl;
    cout << "=================================================" << endl;
    cout << endl;
    check();
}

void Fish::cleanTank() {
    bored -= 20;
    sleep -= 15;
    happy += 20;
    cout << "=================================================" << endl;
    cout << name << " is swimming with elation as you clean the tank." << endl;
    cout << "=================================================" << endl;
    cout << endl;
    check();
}

void Fish::check() {
    if(hunger > 49) {
        cout << "=================================================" << endl;
        cout << name << " seems to be hungry." << endl;
        cout << "=================================================" << endl;
        cout << endl;
    }
    if(sleep > 69) {
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
    if(happy < 30) {
        cout << "=================================================" << endl;
        cout << name << " looks a little sad." << endl;
        cout << "=================================================" << endl;
        cout << endl;
    }
}

void Fish::printStats() {
    cout << "     _____   " << endl;
    cout << "    /     \\  " << endl;
    cout << "   / \\/-|.\\ \\ " << endl;
    cout << "  |  /\\___/  |" << endl;
    cout << "  |          |" << endl;
    cout << "   \\________/" << endl;
    cout << endl << "=================================================" << endl;
    cout << " Here are " << getName() << "'s stats: " << endl;
    cout << " Hunger: " << getHunger() << endl;
    cout << " Sleep: " << getSleep() << endl;
    cout << " Boredom: " << getBored() << endl;
    cout << " Happiness: " << getHappy() << endl;

    cout << "=================================================" << endl;
   

}

void Fish::printMenu() const {
    cout << endl << "=================================================" << endl;
    cout << "Select a Number: " << endl;
    cout << "1- Feed" << endl;
    cout << "2- Play" << endl;
    cout << "3- Trick" << endl;
    cout << "4 - Clean Tank" << endl;
    cout << "5 - Exit" << endl;
    cout << "=================================================" << endl;
    cout << endl;
}