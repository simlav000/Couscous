#ifndef PERSON_H
#define PERSON_H

#include <vector>
#include <string>
#include <sstream>
#include <ctime>

using namespace std;

class Person {
public:
    Person(const string& name, const string& lastName, int age);

    Person(const string& name, const string& lastName, string DOB);

    const string name;
    const string lastName;

    int age;

    // Setters
    void SetCasualEmail(string& email);
    void SetProEmail(string& email);
    void SetDOB(string DOB);
    void SetAge(int age);

    // Getters
    string GetDOB();
    string GetCasualEmail();
    string GetProEmail();

    // Other
    void HappyBirthday();


private:
    string DOB; // DD-MM-YYY
    string casualEmail;
    string proEmail; 

    vector<string> secrets;

    int CalculateAge(string DOB);
};

#endif /* PERSON_H */

