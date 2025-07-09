#include <iostream>
#include <user.hpp>
#include <hardware.hpp>

class Manager : public User
{
private:
    std::string position;

public:
    void setPosition(std::string p);
    std::string getPosition();
    void assignHardware(int serialNumber, std::string name);
};