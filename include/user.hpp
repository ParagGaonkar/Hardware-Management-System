#include <iostream>

class User
{
private:
    int empID;
    std::string name;

public:
    void setEmpID(int e);
    void setName(std::string n);
    int getEmpID();
    std::string getName();
    User();
    User(int empID, std::string name);
};