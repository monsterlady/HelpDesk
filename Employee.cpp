//
// Created by xurui on 2020/1/29.
//

#include <iostream>
#include "Employee.h"

Employee::Employee(const std::string &name, const std::string &department, const std::string &password) : name(name),
                                                                                                          department(
                                                                                                                  department),
                                                                                                          password(
                                                                                                                  password) {}

Employee::~Employee() {

}

const std::string &Employee::getName() const {
    return name;
}

void Employee::setName(const std::string &name) {
    Employee::name = name;
}

const std::string &Employee::getDepartment() const {
    return department;
}

void Employee::setDepartment(const std::string &department) {
    Employee::department = department;
}

const std::string &Employee::getPassword() const {
    return password;
}

void Employee::setPassword(const std::string &password) {
    Employee::password = password;
}

void Employee::toString() {
     std::cout << getName() << " " << getDepartment();

}

bool Employee::isquatified() {
    return false;
}

