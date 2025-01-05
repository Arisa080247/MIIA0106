#include <iostream>
using namespace std;

// กำหนดโครงสร้าง struct
struct Student {
    string studentID;
    string studentname;
    string Field_of_study;
    string Grade;
};

int main() {
    Student students[10]; // สร้างอาร์เรย์ของ struct ขนาด 10

    // รับข้อมูลนักศึกษา
    for (int i = 0; i < 10; i++) {
        cout << "Enter information for student " << i + 1 << ":" << endl;
        cout << "student ID: ";
        cin >> students[i].studentID;
        cout << "student name: ";
        cin >> students[i].studentname;
        cout << "Field of study: ";
        cin >> students[i].Field_of_study;
        cout << "GPA: ";
        cin >> students[i].Grade;
        cout << endl;
    }

    // แสดงข้อมูลนักศึกษา
    cout << "Student Information:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "  student ID: " << students[i].studentID << endl;
        cout << "  student name: " << students[i].studentname << endl;
        cout << "  Field of study: " << students[i].Field_of_study << endl;
        cout << "  GPA: " << students[i].Grade << endl;
        cout << endl;
    }

    return 0;
}
