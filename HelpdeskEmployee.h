//
// Created by Steven on 14/01/2020.
//

#ifndef TOETS_HELPDESKEMPLOYEE_H
#define TOETS_HELPDESKEMPLOYEE_H


#include "Employee.h"

class HelpdeskEmployee : public Employee {
private:
    std::string expert;
public:
    HelpdeskEmployee(std::string name, std::string password, std::string expert);

    void print() override;
};

#endif //TOETS_HELPDESKEMPLOYEE_H
