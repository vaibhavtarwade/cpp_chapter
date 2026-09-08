#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
string name;

public:
Person(string personName) : name(move(personName)) {}

void displayName() const {
cout << "Name: " << name << '\n';
}
};

class Student : public Person {
private:

int rollNumber;

public:
Student(string studentName, int roll)
: Person(move(studentName)), rollNumber(roll) {}

void displayStudent() const {
displayName();
cout << "Roll Number: " << rollNumber << '\n';
}
};

int main() {
Student student("Vaibhav", 66);
student.displayStudent();
return 0;
}