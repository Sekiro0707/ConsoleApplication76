#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


//struct Student {
//    string surname;
//    string group;
//    int grades[5];
//};
//
//
//vector<Student> students;
//
//
//void addStudent(const Student& student) {
//    students.push_back(student);
//}
//
//
//void removeStudent(int index) {
//    if (index >= 0 && index < students.size()) {
//        students.erase(students.begin() + index);
//    }
//    else {
//        cerr << "Invalid index!" << endl;
//    }
//}
//
//
//void printExcellentStudents() {
//    cout << "Excellent students:\n";
//    for (const auto& student : students) {
//        int excellentCount = count_if(begin(student.grades), end(student.grades), [](int grade) {
//            return grade == 5;
//            });
//        if (excellentCount > 3) { 
//            cout << student.surname << " from group " << student.group << '\n';
//        }
//    }
//}
//
//
//void printFailingStudents() {
//    cout << "Failing students:\n";
//    for (const auto& student : students) {
//        int failingCount = count_if(begin(student.grades), end(student.grades), [](int grade) {
//            return grade == 2 || grade == 3;
//            });
//        if (failingCount > 2) { 
//            cout << student.surname << " from group " << student.group << '\n';
//        }
//    }
//}
//
//int main() {
//    
//    Student student1 = { "Ivanov", "Group1", {5, 5, 5, 4, 5} };
//    Student student2 = { "Petrov", "Group2", {2, 3, 2, 4, 3} };
//    Student student3 = { "Sidorov", "Group1", {5, 4, 5, 5, 5} };
//    Student student4 = { "Kuznetsov", "Group3", {3, 3, 2, 3, 2} };
//
//    
//    addStudent(student1);
//    addStudent(student2);
//    addStudent(student3);
//    addStudent(student4);
//
//    
//    printExcellentStudents();
//
//    
//    printFailingStudents();
//
//    return 0;
//}




//struct Man {
//    string surname;
//    string name;
//    int age;
//    string birthdate;
//};
//
//
//vector<Man> people;
//
//
//void addMan(const Man& man) {
//    people.push_back(man);
//}
//
//
//void removeMan(int index) {
//    if (index >= 0 && index < people.size()) {
//        people.erase(people.begin() + index);
//    }
//    else {
//        cerr << "Invalid index!" << endl;
//    }
//}
//
//
//void sortBySurname() {
//    sort(people.begin(), people.end(), [](const Man& a, const Man& b) {
//        return a.surname < b.surname;
//        });
//}
//
//
//void sortByName() {
//    sort(people.begin(), people.end(), [](const Man& a, const Man& b) {
//        return a.name < b.name;
//        });
//}
//
//
//void printBirthdayCelebrants(int month) {
//    cout << "Birthday celebrants in month " << month << ":\n";
//    for (const auto& man : people) {
//        int birthMonth = stoi(man.birthdate.substr(3, 2));
//        if (birthMonth == month) {
//            cout << man.name << " " << man.surname << " - " << man.birthdate << '\n';
//        }
//    }
//}
//
//
//void searchBySurnameAndName(const string& surname, const string& name) {
//    auto it = find_if(people.begin(), people.end(), [&](const Man& man) {
//        return man.surname == surname && man.name == name;
//        });
//    if (it != people.end()) {
//        cout << "Found: " << it->name << " " << it->surname << ", Age: " << it->age << ", Birthdate: " << it->birthdate << '\n';
//    }
//    else {
//        cout << "No match found.\n";
//    }
//}
//
//
//void editMan(int index, const Man& newMan) {
//    if (index >= 0 && index < people.size()) {
//        people[index] = newMan;
//    }
//    else {
//        cerr << "Invalid index!" << endl;
//    }
//}
//
//
//void printAllPeople() {
//    for (const auto& man : people) {
//        cout << man.name << " " << man.surname << ", Age: " << man.age << ", Birthdate: " << man.birthdate << '\n';
//    }
//}
//
//int main() {
//    
//    Man man1 = { "Ivanov", "Ivan", 30, "15.04.1994" };
//    Man man2 = { "Petrov", "Petr", 25, "10.06.1998" };
//    Man man3 = { "Sidorov", "Sidr", 40, "20.04.1984" };
//    Man man4 = { "Kuznetsov", "Nikolai", 35, "05.05.1988" };
//
//   
//    addMan(man1);
//    addMan(man2);
//    addMan(man3);
//    addMan(man4);
//
//    
//    cout << "All people:\n";
//    printAllPeople();
//
//    
//    cout << "\nSorted by surname:\n";
//    sortBySurname();
//    printAllPeople();
//
//    
//    cout << "\nSorted by name:\n";
//    sortByName();
//    printAllPeople();
//
//    
//    cout << "\nBirthday celebrants in April:\n";
//    printBirthdayCelebrants(4);
//
//    
//    cout << "\nSearch for 'Ivanov Ivan':\n";
//    searchBySurnameAndName("Ivanov", "Ivan");
//
//    
//    Man newMan1 = { "Ivanov", "Ivan", 31, "15.04.1993" };
//    editMan(0, newMan1);
//
//    
//    cout << "\nAll people after editing:\n";
//    printAllPeople();
//
//    return 0;
//}