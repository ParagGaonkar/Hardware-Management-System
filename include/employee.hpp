#include <iostream>
#include <user.hpp>
#include <hardware.hpp>
class Employee : public User
{
private:
    std::string position;

public:
    void setPosition(std::string p);
    std::string getPosition();
    void requestHardware(int serialNumber, std::string name);
};