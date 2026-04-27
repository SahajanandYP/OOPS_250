//Write a C++ program to create objects with help of default, parameterized and copy
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    string name;
    int age;
    float gpa;

public:
    // 1. DEFAULT CONSTRUCTOR
    Student() {
        name = "Unknown";
        age = 0;
        gpa = 0.0f;
        cout << "Default Constructor called\n";
    }

    // 2. PARAMETERIZED CONSTRUCTOR
    Student(string n, int a, float g) {
        name = n;
        age = a;
        gpa = g;
        cout << "Parameterized Constructor called\n";
    }

    // 3. COPY CONSTRUCTOR
    Student(const Student& s) {
        name = s.name;
        age = s.age;
        gpa = s.gpa;
        cout << "Copy Constructor called\n";
    }

    // Display method
    void display() const {
        cout << "Name : " << name << "\n"
             << "Age  : " << age  << "\n"
             << "GPA  : " << gpa  << "\n";
    }
};

int main() {
    cout << "=============================\n";
    cout << " Creating s1 (Default)\n";
    cout << "=============================\n";
    Student s1;
    s1.display();

    cout << "\n=============================\n";
    cout << " Creating s2 (Parameterized)\n";
    cout << "=============================\n";
    Student s2("Alice", 20, 3.8f);
    s2.display();

    cout << "\n=============================\n";
    cout << " Creating s3 (Copy of s2)\n";
    cout << "=============================\n";
    Student s3(s2);
    s3.display();

    return 0;
}