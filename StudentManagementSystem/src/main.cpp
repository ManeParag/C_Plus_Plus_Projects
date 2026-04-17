#include <iostream>
#include "studententry.h"
#include "StudentRemove.h"

using namespace std;

int main()
{
    // cout << "Please enter how many data You want to enter data " << endl;
    // int numberOfStudents;
    // cin >> numberOfStudents;
    // StudentDB* studentPtr = new StudentDB[numberOfStudents];
   
    // for(int i = 0 ; i < numberOfStudents ; i++)
    // {
    //     cout << "Enter student data " << i+1 << endl;
    //     studentPtr[i].studentEntry();
    //     // StudentDB stu;
    //     // stu.studentEntry();
    //     // stu.studentDisplay();
    // }

    // StudentDB disObj;
    // disObj.studentDisplay();

    // cout << "Do you want to remove the Student" << endl;
    // char deleteInput ;
    // cin >> deleteInput;

    // if(deleteInput == 'Y')
    // {
        // int rollNo;
        // cout << "Enter the student Roll Number you want to delete" << endl;
        // cin >> rollNo;

        // bool deleteStatus = deleteStudent(rollNo);  
        
        // if(deleteStatus)
        // {
        //     cout << "deleted successfully " << endl;
        // }
        // else
        //     cout << "Student not found";
    // }
    // else
    //     exit(0);

    
    StudentDB* studentPtr = nullptr;
    int numberOfStudents = 0;

    while(1)
    {
           cout << "**************** Welcome ********************\n" << endl;
           cout << "1. Add Student data \n"
                   << "2. Display Student Data \n"
                    << "3. Delete Student \n"
                    << "4. Search student \n"
                    << "5. Exit" << endl ;
        
        int nchoice;
        cout << "Enter your choice: ";
        cin >> nchoice;

        switch(nchoice)
        {
            case 1:
            {
                cout << "Enter number of students: ";
                cin >> numberOfStudents;

                delete[] studentPtr; // free old memory (important)
                studentPtr = new StudentDB[numberOfStudents];

                for (int i = 0; i < numberOfStudents; i++)
                {
                    cout << "Enter student data " << i + 1 << endl;
                    studentPtr[i].studentEntry();
                }
                break;
            }
            case 2:
            {
                if (studentPtr == nullptr)
                {
                    cout << "No data available!\n";
                    break;
                }

                for (int i = 0; i < numberOfStudents; i++)
                {
                    studentPtr[i].studentDisplay();
                }
                break;
            }
            case 3:
            {
                int rollNo;
                cout << "Enter the student Roll Number you want to delete" << endl;
                cin >> rollNo;

                bool deleteStatus = deleteStudent(rollNo);  
        
                if(deleteStatus)
                {
                    cout << "deleted successfully " << endl;
                }
                else
                    cout << "Student not found";
                
                break;
            }

            case 4:
            {
                int rollNo;
                cout << "Enter the student Roll Number you want to Search" << endl;
                cin >> rollNo;   
            }
            case 5:
                cout << "Exiting...\n";
                delete[] studentPtr;
                return 0;

            default :
                cout << "Invald choice" << endl;

        }
    }

}