
#include <iostream>
#include <fstream>
#include <cstdlib>  // for system()

using namespace std;

int main() {
    ofstream file("attendance.csv");

    
file << "Index Number,Name,Status\n";
file << "2025001,John Mensah,Present\n";
file << "2025002,Ama Owusu,Absent\n";
file << "2025003,Kofi Boateng,Late\n";
file << "2025004,Akosua Boateng,Present\n";
file << "2025005,Daniel Adjei,Present\n";
file << "2025006,Priscilla Ofori,Absent\n";
file << "2025007,Michael Osei,Late\n";
file << "2025008,Ebenezer Tetteh,Present\n";
file << "2025009,Patricia Adjei,Present\n";
file << "2025010,Richard Amoah,Absent\n";
file << "2025011,Victoria Amoah,Present\n";
file << "2025012,Emmanuel Teye,Late\n";
file << "2025013,Gladys Nyarko,Present\n";
file << "2025014,Samuel Amoah,Absent\n";
file << "2025020,Jonathan Darko,Late\n";
file << "\nSummary\n";
file << "Total Present,10\n";
file << "Total Absent,5\n";
file << "Total Late,5\n";
    file.close();

    // Open Excel automatically
    system("start attendance.csv");

    return 0;
}
