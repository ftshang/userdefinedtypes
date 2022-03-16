#include <iostream>

struct Person {

int age;
int height;
float hairLength;
float GPA;
unsigned int SATScore;

void run(int howFast, bool startWithLeftFoot);

};


int main() {
    Person p, person, amanda;
    std::cout << p.age << std::endl;
    std::cout << amanda.age << std::endl;

    return 0;
}