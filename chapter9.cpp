#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string personName) : name(personName) {}
};

class Student : public Person {
private:
    int rollNumber;

public:
    Student(string studentName, int roll)
        : Person(studentName), rollNumber(roll) {}

    void display() const {
        cout << "Name: " << name << '\n';
        cout << "Roll Number: " << rollNumber << '\n';
    }
};

int main() {
    Student student("Varsha", 65);
    student.display();
    return 0;
}