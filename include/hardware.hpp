#include <iostream>
class Hardware
{
private:
    int serialNumber;
    std::string name;

public:
    void setName(std::string n);
    void setSerialNumber(int n);
    int getSerialNumber();
    std::string getName();
    Hardware();
    Hardware(int serialNumber, std::string name);
};