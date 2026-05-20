#include <iostream>

using namespace std;

class Student 
{
public: 
    string name;
    Student(string name) : name(name) {}
 virtual void print() { cout << name << endl; }
};

class MedicalStudent : public Student
{
 public: 
    string speciality;

    MedicalStudent(string name, string speciality) : 
    speciality(speciality) , Student(name) {};

    void print() { cout << name << ": " << speciality << endl;}

};

int main()
{
    Student *students[] =
    {
        new Student("Kevin"),
        new Student("Mary"),
        new Student("Kelly"),
        new MedicalStudent("John", "Pediatrics"),
        new MedicalStudent("Lisa", "Surgery"),
        new MedicalStudent("Ali", "GP")

    };

    for (int i =0; i<6; i++) {
        students[i]->print();
    }

    for(int i =0; i<6; i++) {
        delete students[i];
    }
    return 0;
}