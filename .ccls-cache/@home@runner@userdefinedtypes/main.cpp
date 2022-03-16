#include <iostream>

struct Person {

int age;
int height;
float hairLength;
float GPA;
unsigned int SATScore;
int distanceTraveled = 0;

void run(int howFast, bool startWithLeftFoot);

struct Limb {
    void stepForward();
    int stepSize();
};

};

void Person::Limb::stepForward() {
    std::cout << "You moved forward!" << std::endl;
}

int Person::Limb::stepSize() {
    return 10;
}

void Person::run(int howFast, bool startWithLeftFoot) 
{
    Limb leftFoot, rightFoot;
    if (startWithLeftFoot == true) {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += rightFoot.stepSize();
    distanceTraveled += leftFoot.stepSize();
}


int main() {
    Person p, person, amanda;
    for (int i = 0; i < 5; i++) {
        p.run(14, false);
    }
    std::cout << p.distanceTraveled << std::endl;

    return 0;
}