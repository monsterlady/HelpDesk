//
// Created by Steven on 14/01/2020.
//

#include <iostream>
#include "Employee.h"

Employee::Employee(std::string name, std::string password, std::string department) :
name(name), password(password),department(department) {}

void Employee::print() {
    std::cout << "Name:" <<  name << " Password:" << password << " Department:" << department << '\n';
}

std::string Employee::getName()  {
    return name;
}
