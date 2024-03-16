#include <iostream>
#include <fstream>
using namespace std;

int writeFile(string filename = "employee.txt")
{
    ofstream ofs(filename);
    if (!ofs)
    {
        cout << "File Open Error\n";
        return -1;
    }

    cout << "Enter the number of employees: ";
    int num_employees;
    cin >> num_employees;

    for (int i = 0; i < num_employees; i++) {
        int id;
        string name;
        string dept;
        double salary;

        cout << "Enter the employee ID: ";
        cin >> id;
        cout << "Enter the employee Name: ";
        cin >> name;
        cout << "Enter the department Name: ";
        cin >> dept;
        cout << "Enter the salary: ";
        cin >> salary;

        ofs << id << endl << name << endl << dept << endl << salary << endl;
    }

    ofs.close();
    return num_employees;
}

int readFile(string filename = "employee.txt"){
    ifstream ifs(filename);
    if (!ifs)
    {
        cout << "Read File Open Error\n";
        return 0;
    }
    
    int id;
    string name, department;
    double salary; 
    int num_employees = 0;
    while (ifs >> id >> name >> department >> salary) {
        cout << id << " " << name << " " << department << " " << salary << "\n";
        num_employees++;
    }
    ifs.close();
    return num_employees;
}