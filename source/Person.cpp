#include "Person.h"
#include <vector>
#include <string>

using namespace std;

Person::Person(const string& name, const string& lastName, int age)
    : name(name), lastName(lastName), age(age) {}

