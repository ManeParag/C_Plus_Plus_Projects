#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>
#include "StudentRemove.h"

using namespace std;

bool deleteStudent(int rollNo)
{
    ifstream infile("student.txt");
    ofstream tempbufferfile("temp.txt");
    bool flag ;
    string fileline;

    while(getline( infile, fileline))
    {
        stringstream ss(fileline);
        string rn;
        getline(ss, rn, ',');

        //cout << " rn : " << rn;

        if(stoi(rn) != rollNo)
        {
            tempbufferfile << fileline << endl;
        }
        else{
            flag  = true;
        }
    }

    infile.close();
    tempbufferfile.close();

    remove("student.txt");
    rename("temp.txt", "student.txt");


    return flag;

}