#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

/* ===================== STUDENT MANAGEMENT ===================== */

void registerStudent()
{
    string index, name, programme;

    cout << "\nEnter Index Number: ";
    cin >> index;
    cin.ignore();

    cout << "Enter Full Name: ";
    getline(cin, name);

    cout << "Enter Programme: ";
    getline(cin, programme);

    ofstream file("student.csv", ios::app);

    if (file.is_open())
    {
        file << index << "," << name << "," << programme << endl;
        file.close();
        cout << "Student registered successfully.\n";
    }
    else
    {
        cout << "Error opening student file.\n";
    }
}

void viewStudents()
{
    ifstream file("student.csv");
    string line;

    cout << "\n===== REGISTERED STUDENTS =====\n";

    while (getline(file, line))
    {
        stringstream ss(line);
        string index, name, programme;

        getline(ss, index, ',');
        getline(ss, name, ',');
        getline(ss, programme, ',');

        cout << "Index: " << index
             << " | Name: " << name
             << " | Programme: " << programme << endl;
    }

    file.close();
}

/* ===================== ATTENDANCE SESSION ===================== */

void createSession()
{
    string courseCode, date, startTime, duration;

    cout << "\nEnter Course Code: ";
    cin >> courseCode;

    cout << "Enter Date (YYYY_MM_DD): ";
    cin >> date;

    cout << "Enter Start Time: ";
    cin >> startTime;

    cout << "Enter Duration (hours): ";
    cin >> duration;

    string filename = "session_" + courseCode + "_" + date + ".txt";
    ofstream sessionFile(filename);

    if (!sessionFile)
    {
        cout << "Error creating session file.\n";
        return;
    }

    sessionFile << "Course: " << courseCode << endl;
    sessionFile << "Date: " << date << endl;
    sessionFile << "Start Time: " << startTime << endl;
    sessionFile << "Duration: " << duration << " hours\n";
    sessionFile << "-----------------------------------\n";

    ifstream studentFile("student.csv");
    string line;

    int present = 0, absent = 0, late = 0;

    while (getline(studentFile, line))
    {
        stringstream ss(line);
        string index, name, programme;

        getline(ss, index, ',');
        getline(ss, name, ',');
        getline(ss, programme, ',');

        int status;
        cout << "\nMark attendance for " << name << " (" << index << ")\n";
        cout << "1. Present\n2. Absent\n3. Late\nChoice: ";
        cin >> status;

        string statusText;

        if (status == 1)
        {
            statusText = "Present";
            present++;
        }
        else if (status == 2)
        {
            statusText = "Absent";
            absent++;
        }
        else
        {
            statusText = "Late";
            late++;
        }

        sessionFile << index << "," << name << "," << statusText << endl;
    }

    sessionFile << "-----------------------------------\n";
    sessionFile << "Summary:\n";
    sessionFile << "Present: " << present << endl;
    sessionFile << "Absent: " << absent << endl;
    sessionFile << "Late: " << late << endl;

    studentFile.close();
    sessionFile.close();

    cout << "\nSession saved successfully.\n";
}

/* ===================== MAIN MENU ===================== */

int main()
{
    int choice;

    do
    {
        cout << "\n===== DIGITAL ATTENDANCE SYSTEM =====\n";
        cout << "1. Register Student\n";
        cout << "2. View Students\n";
        cout << "3. Create Attendance Session\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                registerStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                createSession();
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid option.\n";
        }

    } while (choice != 4);

    return 0;
}
