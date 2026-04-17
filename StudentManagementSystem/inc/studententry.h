#ifndef STUDENTENTRY_H
#define STUDENTENTRY_H

#include <string>
#include <sstream>

class StudentDB{
    int id;
    std::string name;
    float marks;

    public :
    StudentDB();
    void studentEntry();
    void studentDisplay();  
};

#endif