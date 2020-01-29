//
// Created by xurui on 2020/1/29.
//

#include <iostream>
#include "HelpDeskEmployee.h"

HelpDeskEmployee::HelpDeskEmployee(const std::string &name, const std::string &department, const std::string &password,
                                   const std::string &expertise):Employee(name,department,password),expertise(expertise) {
}

    const std::string &HelpDeskEmployee::getExpertise() const {
    return expertise;
}

void HelpDeskEmployee::setExpertise(const std::string &expertise) {
    HelpDeskEmployee::expertise = expertise;
}

void HelpDeskEmployee::toString() {
    std::cout << Employee::getName() << " " << Employee::getDepartment() << " " << getExpertise();
}

HelpDeskEmployee::~HelpDeskEmployee() {

}

bool HelpDeskEmployee::isquatified() {
    return true;
}





