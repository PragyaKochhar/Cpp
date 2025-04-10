#include<iostream>
#include<string>
using namespace std;

const int maxCourses=10;
const int maxStudents=100;

class Student {
private:
    string name;
    int rollno;
    float cgpa;
    string courses[maxCourses];
    int courseCount;

public:
    Student() {
        name="Unknown";
        rollno=0;
        cgpa=0.0;
        courseCount=0;
    }

    Student(string n,int r,float c,string courseList[],int count) {
        name = n;
        rollno = r;
        courseCount = count;
        cgpa = (c >= 0.0 && c <= 10.0) ? c : 0.0;
        for (int i = 0; i < count && i < maxCourses; ++i) {
            courses[i] = courseList[i];
        }
    }

    Student(const Student &other) {
        name = other.name;
        rollno = other.rollno;
        cgpa = other.cgpa;
        courseCount = other.courseCount;
        for (int i = 0; i < courseCount; ++i) {
            courses[i] = other.courses[i];
        }
    }

    ~Student() {
        cout << "Destructor called for: " << name << endl;
    }

    void addCourse(string courseName) {
        if (courseCount < maxCourses) {
            courses[courseCount++] = courseName;
            cout << "Course added successfully.\n";
        } else {
            cout << "Cannot add more courses. Limit reached.\n";
        }
    }

    void updateCGPA(float newCgpa) {
        if (newCgpa >= 0.0 && newCgpa <= 10.0) {
            cgpa = newCgpa;
            cout << "CGPA updated successfully.\n";
        } else {
            cout << "Invalid CGPA. Must be between 0 and 10.\n";
        }
    }

    void displayInfo() const {
        cout << "Name: " << name << "\nRoll No: " << rollno << "\nCGPA: " << cgpa << "\nCourses: ";
        if (courseCount == 0) {
            cout << "None";
        }
        for (int i = 0; i < courseCount; ++i) {
            cout << courses[i] << " ";
        }
        cout << "\n";
    }

    int getRollNumber() const {
        return rollno;
    }
};

class StudentManagementSystem {
private:
    Student students[maxStudents];
    int studentCount;

public:
    StudentManagementSystem() {
        studentCount = 0;
    }

    void addStudent(const Student& s) {
        if (studentCount < maxStudents) {
            students[studentCount++] = s;
            cout << "Student added successfully.\n";
        } else {
            cout << "Student limit reached.\n";
        }
    }

    void searchStudent(int rollNo) const {
        bool found = false;
        for (int i = 0; i < studentCount; ++i) {
            if (students[i].getRollNumber() == rollNo) {
                students[i].displayInfo();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Student with roll number " << rollNo << " not found.\n";
        }
    }

    void displayAll() const {
        if (studentCount == 0) {
            cout << "No student records to display.\n";
        } else {
            for (int i = 0; i < studentCount; ++i) {
                cout << "\nStudent " << i + 1 << ":\n";
                students[i].displayInfo();
            }
        }
    }
};

int main() {
    StudentManagementSystem sms;

    string courses1[] = {"Math", "Physics"};
    Student s1("Aarav", 101, 8.7, courses1, 2);

    string courses2[] = {"C++", "Data Structures"};
    Student s2("Riya", 102, 9.4, courses2, 2);

    sms.addStudent(s1);
    sms.addStudent(s2);

    cout << "\n--- All Student Records ---\n";
    sms.displayAll();

    cout << "\n--- Search for Roll No 102 ---\n";
    sms.searchStudent(102);

    cout << "\n--- Adding course to Aarav ---\n";
    s1.addCourse("English");

    cout << "\n--- Updating CGPA for Riya ---\n";
    s2.updateCGPA(9.8);

    cout << "\n--- Display updated info ---\n";
    s1.displayInfo();
    s2.displayInfo();

    return 0;
}