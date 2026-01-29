#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Person {
    // private:
    protected:
        string first;
        string last;

    public:
        Person(string first, string last) {
            this->first = first;
            this->last = last;
        }

        Person() = default;

        void setFirstName(string first) {
            this->first = first;
        }

        void setLastName(string last) {
            this->last = last;
        }

        string getFullName() {
            return first + " " + last;
        }

        // void printFullName() {
        //     cout << first << " " << last << endl;
        // }

        void printInfo() {
            cout << "Name: " << first << " " << last << endl;
        }

        static void printPeople(vector<Person*> people) {
            for(auto person: people) {
                person->printInfo();
            }
        } 
};

class Employee: public Person {
    string department;

    public:
        Employee(string firstName, string lastName, string department) : Person(firstName, lastName), department(department) {}
        Employee() = default;

        void setDepartment(string department) {
            this->department = department;
        }

        string getDepartment() {
            return department;
        }

        void printInfo() {
            cout << "Name: " << first << " " << last << endl;
            cout << "Department: " << department << endl;
        }
};

int main() {
    // Person p;
    
    // p.first = "Kashyap";
    // p.last = "Patel";
    // p.printFullName();

    // p.setFirstName("Kashyap");
    // p.setLastName("Patel");
    // cout << p.getFullName() << endl;

    Person p("Kashyap", "Patel");
    // cout << p.getFullName() << endl;

    // Person p2;
    // p2.setFirstName("Harsh");
    // p2.setLastName("Patel");
    // p2.printFullName();

    // Employee e;
    // e.setFirstName("Aditya");
    // e.setLastName("Patel");
    // e.printFullName();

    Employee e2("Akash", "Patel", "Sr. Engineer");
    // cout << e2.getFullName()<< " Department: " << e2.getDepartment() << endl;

    // p.printInfo();
    // e2.printInfo();

    vector<Person*> people;
    people.push_back(&p);
    people.push_back(&e2);

    Person::printPeople(people);

    return 0;
}