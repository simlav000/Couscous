#ifndef PERSON_H
#define PERSON_H

#include <vector>
#include <string>
#include <sstream>
#include <ctime>
#include <filesystem>
#include <fstream>

using namespace std;

class Person {
public:
    Person(const string& name, const string& lastName, int age);

    Person(const string& name, const string& lastName, string DOB);

    const string name;
    const string lastName;

    string casualEmail;
    string proEmail; 

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
    int Save();


private:
    string DOB; // DD-MM-YYY

    vector<string> secrets;

    int CalculateAge(string DOB);
    int Dump(string filename);
};

#endif /* PERSON_H */

