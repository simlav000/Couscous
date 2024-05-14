#ifndef PERSON_H
#define PERSON_H

#include <vector>
#include <string>

using namespace std;

class Person {
public:
    Person(const string& name, const string& lastName, int age);

    // Setters
    void SetCasualEmail(string& email);
    void SetProEmail(string& email);
    void SetDOB(string& DOB);
    void SetAge(int age);

    // Getters
    string getName() const;
    string getLastName() const;
    string getDOB() const;
    string getCasualEmail() const;
    string getProEmail() const;
    int getAge() const;

    // Other
    void HappyBirthday();


private:
    const string name;
    const string lastName;

    string DOB; // DD-MM-YYY
    string casualEmail;
    string proEmail; 

    int age;

    vector<string> secrets;
};

#endif /* PERSON_H */

