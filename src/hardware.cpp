#include <iostream>
#include <hardware.hpp>

void Hardware::setName(std::string n)
{
    name = n;
}

void Hardware::setSerialNumber(int n)
{
    serialNumber = n;
}

std::string Hardware::getName()
{
    return name;
}

int Hardware::getSerialNumber()
{
    return serialNumber;
}