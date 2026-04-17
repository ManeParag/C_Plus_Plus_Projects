#include <iostream>
#include <fstream>
#include "studententry.h"

using namespace std;

StudentDB::StudentDB() : id(0), name(""), marks(0.0f) {};

void StudentDB::studentEntry()
{
    cout << "Enter student id : " << endl;
    cin >> id;

    cin.ignore();
    cout << "Enter Student Name : " << endl;
    getline(cin, name);
    cout << "Enter Srudent marks : " << endl;
    cin >> marks;

    ofstream file("student.txt" , ios::app);
    if(file.is_open())
    {
        file << id << "," << name << "," << marks << endl;
        file.close();
    }
    else
        cout <<" Error : File is not open " << endl;
}


void StudentDB::studentDisplay()
{
    cout   << " student Data " << endl;
    ifstream infile("student.txt");
    string fulLine;

    while(getline(infile, fulLine))
    {
        stringstream ss(fulLine );
        string rollno, name, marks;

        getline(ss, rollno , ',');
        getline(ss, name, ',');
        getline(ss, marks, ',');
        
        cout << "\n Roll no : " << rollno 
            << "\n Name : "  <<  name
            << "\n Marks : " << marks << endl;
    }
}
