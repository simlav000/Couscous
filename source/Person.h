#ifndef PERSON_H
#define PERSON_H

#include <vector>
#include <string>

using namespace std;

class Person {
public:
    const string name;
    const string lastName;

    const string DOB; // DD-MM-YYY
    string casualEmail;
    string proEmail; 

    int age;

    Person(const string& name, const string& lastName, int age);

private:
    vector<string> secrets;
};

#endif /* PERSON_H */

