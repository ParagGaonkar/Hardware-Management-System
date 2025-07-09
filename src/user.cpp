#include <iostream>
#include <user.hpp>

void User::setEmpID(int e)
{
    empID = e;
}

void User::setName(std::string n)
{
    name = n;
}

int User::getEmpID()
{
    return empID;
}

std::string User::getName()
{
    return name;
}