//
// Created by Steven on 14/01/2020.
//

#ifndef TOETS_EMPLOYEE_H
#define TOETS_EMPLOYEE_H


#include <string>

class Employee {
protected:
    std::string name;
    std::string password;
    std::string department;

public:
    Employee(std::string name, std::string password, std::string department);

    std::string getName();

    virtual void print();
};

#endif //TOETS_EMPLOYEE_H
