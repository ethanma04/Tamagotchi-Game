//main.cpp
#include "Pet.cpp"
#include "Dog.cpp"
#include "Fish.cpp"
#include "Bird.cpp"
#include <fstream>

int main() {
    string dogFile = "dogOut.txt";
    string fishFile = "fishOut.txt";
    string birdFile = "birdOut.txt";

    
    ofstream foutd(dogFile);
    ofstream foutf(fishFile);
    ofstream foutb(birdFile);
    Fish fish;
    Bird bird;
    Dog dog;
    string dogname, fishname, birdname;
    bool exitType = true;

    int dogi = 1;
    int fishi = 1;
    int birdi = 1;
    cout << "=================================================" << endl;
    cout << "Welcome to the E-Pet Caretaker!" << endl;
    cout << "=================================================" << endl << endl;
    while (exitType) {
        int anselect;
        cout << endl << "=================================================" << endl;
        cout << "Select an Animal: " << endl;
        cout << "1- Dog " << endl;
        cout << "2- Fish " << endl;
        cout << "3- Bird " << endl;
        cout << "4- Exit " << endl;
        cout << "=================================================" << endl;
        cin >> anselect;

        if(anselect == 1) {
            bool dogGame = true;
            if(dogi == 1) {
                cin.ignore();
                cout << "What is the pet's name?" << endl;
                getline(cin, dogname);
                dog.setName(dogname);
                dog.setHunger(70);
                dog.setSleep(40);
                dog.setBored(30);
                dog.setHappy(50);
            }

            while(dogGame) {
                

                if(dogi % 3 == 0) {
                    dog.nextHour();
                }


                dog.printStats();
                dog.printMenu();


                int select;
                cin >> select;
                if(select == 1) {
                    dog.feedPet();
                }
                else if (select == 2) {
                    dog.playPet();
                }
                else if (select == 3) {
                    dog.trickPet();
                }
                else if (select == 4) {
                    dog.newToy();
                }
                else if (select == 5) {
                    dogGame = false;
                    cout << "Progress Saved: Now Exiting..." << endl;
                    ofstream foutd(dogFile, ios::out | ios::trunc);
                    
                    foutd << dog.getName() << endl;
                    foutd << dog.getHunger() << endl;
                    foutd << dog.getSleep() << endl;
                    foutd << dog.getBored() << endl;
                    foutd << dog.getHappy() << endl;

                }
                else {
                    cout << "Invalid Response!" << endl;
                }
                dogi += 1;

            }
            ifstream findo(dogFile);
            string fname;
            int fhunger, fsleep, fbored, fhappy;

            getline(findo, fname);
            findo >> fhunger >> fsleep >> fbored >> fhappy;
            dog.setName(fname);
            dog.setHunger(fhunger);
            dog.setSleep(fsleep);
            dog.setBored(fbored);
            dog.setHappy(fhappy);
        }
        else if(anselect == 2) {
            bool fishGame = true;
            if(fishi == 1) {
                cin.ignore();
                cout << "What is the pet's name?" << endl;
                getline(cin, fishname);
                fish.setName(fishname);
                fish.setHunger(35);
                fish.setSleep(50);
                fish.setBored(60);
                fish.setHappy(40);
            }

            while(fishGame) {
                

                if(fishi % 3 == 0) {
                    fish.nextHour();
                }


                fish.printStats();
                fish.printMenu();


                int select;
                cin >> select;
                if(select == 1) {
                    fish.feedPet();
                }
                else if (select == 2) {
                    fish.playPet();
                }
                else if (select == 3) {
                    fish.trickPet();
                }
                else if (select == 4) {
                    fish.cleanTank();
                }
                else if (select == 5) {
                    fishGame = false;
                    cout << "Progress Saved: Now Exiting..." << endl;
                    ofstream foutf(fishFile, ios::out | ios::trunc);
                    
                    foutf << fish.getName() << endl;
                    foutf << fish.getHunger() << endl;
                    foutf << fish.getSleep() << endl;
                    foutf << fish.getBored() << endl;
                    foutf << fish.getHappy() << endl;

                }
                else {
                    cout << "Invalid Response!" << endl;
                }
                fishi += 1;

            }
            ifstream finf(fishFile);
            string fname;
            int fhunger, fsleep, fbored, fhappy;

            getline(finf, fname);
            finf >> fhunger >> fsleep >> fbored >> fhappy;
            fish.setName(fname);
            fish.setHunger(fhunger);
            fish.setSleep(fsleep);
            fish.setBored(fbored);
            fish.setHappy(fhappy);
        }
        else if (anselect == 3) {
            bool birdGame = true;
            if(birdi == 1) {
                cin.ignore();
                cout << "What is the pet's name?" << endl;
                getline(cin, birdname);
                bird.setName(birdname);
                bird.setHunger(50);
                bird.setSleep(20);
                bird.setBored(40);
                bird.setHappy(40);
            }

            while(birdGame) {
                

                if(birdi % 3 == 0) {
                    bird.nextHour();
                }


                bird.printStats();
                bird.printMenu();


                int select;
                cin >> select;
                if(select == 1) {
                    bird.feedPet();
                }
                else if (select == 2) {
                    bird.playPet();
                }
                else if (select == 3) {
                    bird.trickPet();
                }
                else if (select == 4) {
                    bird.fly();
                }
                else if (select == 5) {
                    birdGame = false;
                    cout << "Progress Saved: Now Exiting..." << endl;
                    ofstream foutb(birdFile, ios::out | ios::trunc);
                    
                    foutb << bird.getName() << endl;
                    foutb << bird.getHunger() << endl;
                    foutb << bird.getSleep() << endl;
                    foutb << bird.getBored() << endl;
                    foutb << bird.getHappy() << endl;

                }
                else {
                    cout << "Invalid Response!" << endl;
                }
                birdi += 1;

            }
            ifstream finb(birdFile);
            string fname;
            int fhunger, fsleep, fbored, fhappy;

            getline(finb, fname);
            finb >> fhunger >> fsleep >> fbored >> fhappy;
            bird.setName(fname);
            bird.setHunger(fhunger);
            bird.setSleep(fsleep);
            bird.setBored(fbored);
            bird.setHappy(fhappy);            
        }
        else if (anselect == 4) {
            exitType = false;
        }
        foutd.close();
        foutf.close();
        foutb.close();
    }

    cout << "=================================================" << endl;
    cout << "We hope you enjoyed taking care of your E-Pets!" << endl;
    cout << "=================================================" << endl;




}



