#include <iostream>
#include <employee.hpp>

void Employee::setPosition(std::string p)
{
    position = p;
}
std::string Employee::getPosition()
{
    return position;
}