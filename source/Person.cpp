#include "Person.h"

using namespace std;

Person::Person(const string& name, const string& lastName, int age)
    : name(name), lastName(lastName), age(age) {}

Person::Person(const string& name, const string& lastName, string DOB)
        : name(name), lastName(lastName), DOB(DOB), age(CalculateAge(DOB)) {}

    
// Setter implementations
void Person::SetDOB(string date) {
    // Use move semantics to avoid unnecessary copying
    DOB = move(date);
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

// Getter implementations
string Person::GetDOB() {
    return DOB;
}

string Person::GetCasualEmail() {
    return casualEmail;
}

string Person::GetProEmail() {
    return proEmail;
}

int Person::Save() {
    // Assuming executable is in the run/ directory
    string filename = "Contacts/" + this->name + "_" + this->lastName + ".json";  // idk if json yet

    // Check if file exists
    if (!filesystem::exists(filename)) {
        // Create file and close it
        ofstream outFile(filename);
        outFile.close();
    }
    // Maybe there's a package for this? Seems arduous to implement unless you can simply loop over all the attributes of a class.
    //Dump(filename);

    return 0;
}

    // Maybe add a way to make sure there exists only one file with this name

int Person::CalculateAge(string DOB) {
    // Expected format: YYYY-MM-DD
    int year, month, day;
    char dash1, dash2;

    istringstream iss(DOB);
    if (!(iss >> year >> dash1 >> month >> dash2 >> day) || dash1 != '-' || dash2 != '-') {
        return -1;
    }

    time_t t = time(nullptr);
    tm* now = localtime(&t);

    int currentYear = now->tm_year + 1900;
    int currentMonth = now->tm_mon + 1;
    int currentDay = now->tm_mday;

    int age = currentYear - year;
    if (currentMonth < month || (currentMonth == month && currentDay < day)) {
        age--;
    }

    return age;
}










