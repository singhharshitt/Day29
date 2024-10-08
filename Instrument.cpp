#include <iostream>
using namespace std;

// Base class
class Instrument {
public:
    // Pure virtual function to be overridden by derived classes
    virtual void playSound() = 0;

    // Virtual function that can be overridden in derived classes
    virtual void display() {
        cout << "This is an instrument." << endl;
    }

    // Virtual destructor to ensure proper cleanup
    virtual ~Instrument() {}
};

// Derived class: Piano
class Piano : public Instrument {
public:
    // Override the playSound method
    void playSound() override {
        cout << "Playing a melodious piano tune." << endl;
    }

    // Override the display method
    void display() override {
        cout << "This is a Piano." << endl;
    }
};

// Derived class: Violin
class Violin : public Instrument {
public:
    // Override the playSound method
    void playSound() override {
        cout << "Playing a classical violin tune." << endl;
    }

    // Override the display method
    void display() override {
        cout << "This is a Violin." << endl;
    }
};

int main() {
    // Create an array of pointers to Instrument objects
    Instrument* instruments[2];

    // Dynamically allocate Piano and Violin objects
    instruments[0] = new Piano();
    instruments[1] = new Violin();

    // Use polymorphism to call playSound() and display() methods
    for (int i = 0; i < 2; ++i) {
        instruments[i]->playSound();
        instruments[i]->display();
        cout << endl;
    }

    // Deallocate memory for all objects
    for (int i = 0; i < 2; ++i) {
        delete instruments[i];
    }

    return 0;
}
