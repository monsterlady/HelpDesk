//
// Created by Steven on 14/01/2020.
//

#include <iostream>
#include "HelpdeskEmployee.h"

HelpdeskEmployee::HelpdeskEmployee(std::string name, std::string password,
        std::string expert) : Employee(name, password, "helpdesk"), expert(expert) {}

void HelpdeskEmployee::print() {
    std::cout << "Name:" <<  name << " Password:" << password << " Department:" << department << " Expert::" << expert << '\n';
}
