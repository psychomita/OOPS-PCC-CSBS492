#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal is eating." << endl;
    }

    void sleep() {
        cout << "This animal is sleeping." << endl;
    }
};

// Derived class 1
class Mammal : public Animal {
public:
    void giveBirth() {
        cout << "This mammal is giving birth." << endl;
    }

    void nurse() {
        cout << "This mammal is nursing its young." << endl;
    }
};

// Derived class 2
class Bird : public Animal {
public:
    void layEggs() {
        cout << "This bird is laying eggs." << endl;
    }

    void fly() {
        cout << "This bird is flying." << endl;
    }
};

// Derived class 3
class Dog : public Mammal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }

    void fetch() {
        cout << "The dog is fetching the ball." << endl;
    }
};

// Derived class 4
class Cat : public Mammal {
public:
    void meow() {
        cout << "The cat is meowing." << endl;
    }

    void purr() {
        cout << "The cat is purring." << endl;
    }
};

// Derived class 5
class Sparrow : public Bird {
public:
    void chirp() {
        cout << "The sparrow is chirping." << endl;
    }

    void hop() {
        cout << "The sparrow is hopping." << endl;
    }
};

// Derived class 6
class Eagle : public Bird {
public:
    void screech() {
        cout << "The eagle is screeching." << endl;
    }

    void soar() {
        cout << "The eagle is soaring high." << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;
    Sparrow sparrow;
    Eagle eagle;

    // Animal methods
    dog.eat();
    dog.sleep();
    cat.eat();
    cat.sleep();
    sparrow.eat();
    sparrow.sleep();
    eagle.eat();
    eagle.sleep();

    // Mammal methods
    dog.giveBirth();
    dog.nurse();
    cat.giveBirth();
    cat.nurse();

    // Bird methods
    sparrow.layEggs();
    sparrow.fly();
    eagle.layEggs();
    eagle.fly();

    // Specific methods
    dog.bark();
    dog.fetch();
    cat.meow();
    cat.purr();
    sparrow.chirp();
    sparrow.hop();
    eagle.screech();
    eagle.soar();

    return 0;
}
