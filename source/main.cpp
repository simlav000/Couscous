#include "Person.h"
#include <iostream>

int main() {
    Person Simon("Simon", "Lavoie", 23);
    std::string name = "test";
    Simon.SetDOB(name);
    std::cout << Simon.GetDOB() << std::endl;

    Person Test("fname", "lname", "2000-11-30");
    std::cout << Test.GetDOB() << std::endl;
    std::cout << Test.age << std::endl;
    return 0;
}
