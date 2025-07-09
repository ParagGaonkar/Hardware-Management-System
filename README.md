# Hardware-Management-System
To manage the Hardware and other utilities for Office Employees
Hardware Management System

User class
	int empIP;
	string name;
	getter & setters
	
Hardware class
	int serialNumber;
	string name;
	getter & setters
	
Manager class derived from User
	std::string position
	assignHardware();
	
Employee class derived from User
	std::string position
	requestHardware();
