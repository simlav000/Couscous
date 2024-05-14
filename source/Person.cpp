#include "Person.h"
#include <vector>
#include <string>

using namespace std;

Person::Person(const string& name, const string& lastName, int age)
    : name(name), lastName(lastName), age(age) {}

// Setter implementations
void Person::SetDOB(string& date) {
    DOB = date;
}

void Person::SetCasualEmail(string& email) {
    casualEmail = email;
}

void Person::SetProEmail(string& email) {
    proEmail = email;
}

void Person::SetAge(int age) {
    this->age = age;
}

