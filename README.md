# DIGITAL ATTENDANCE SYSTEM

## Course Information
Course Code: EEE227  
Programme: HND Electrical Engineering Level 200  
Assessment: Mid-Semester Capstone Project  
Student: Gabuja Noah 
Index Number: 01241752d
 



## Project Description

This project implements a console-based Digital Attendance System in C++.  
It replaces the traditional paper-based attendance method with a structured digital system.

The system allows:

- Student registration
- Lecture session creation
- Attendance marking
- Attendance report generation
- Persistent data storage using files

The application runs offline on Windows using VS Code.

---

## Features Implemented

### Week 1 – Student Management
- Student class implementation
- Register students
- View students
- Save student records to CSV file

### Week 2 – Attendance Session
- AttendanceSession class implementation
- Create lecture sessions
- Menu-driven system

### Week 3 – Attendance Logic
- Mark attendance (Present / Absent / Late)
- Input validation
- Attendance summary generation

### Week 4 – File Handling and Refinement
- Load students from file
- Save session records to text file
- Persistent storage between executions
- Refactored structured code

---

## File Storage Structure

Student records are saved in:

student.csv

Format:
IndexNumber,FullName,Programme

Example:
2026001,John Mensah,HND Electrical

Attendance sessions are saved in:

session_COURSECODE_YYYY_MM_DD.txt

Example:
session_EE201_2026_02_26.txt

---

## Project Structure

MID SEMESTER EXAMS 

attendance.cpp

attendance.csv

main.cpp

README.md

session_EEE_227.csv

session_FAH_214.csv

session_MAT_211.csv

session_MECH_266.csv

sudent.csv



---

 ## Technologies Used

- C++
- fstream (File Handling)
- Vector (STL)
- VS Code
- GitHub

---

## How to Compile

Using g++:

g++ main.cpp -o attendance



## How to Run

On Windows:

attendance.exe

On other systems:

./attendance



## Learning Outcomes Achieved

- Applied C++ programming concepts
- Implemented classes and objects
- Used file handling for persistent storage
- Built a structured menu-driven console application
- Applied version control using GitHub



## Conclusion

The Digital Attendance System successfully demonstrates the use of C++ to solve a real-world attendance management problem.  

The system ensures accurate record keeping, structured reporting, and reliable file storage.
