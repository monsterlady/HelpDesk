//
// Created by xurui on 2020/1/29.
//

#ifndef TOETS_EMPLOYEE_H
#define TOETS_EMPLOYEE_H


#include <string>

class Employee {
    std::string name;
    std::string department;
    std::string password;

public:
    Employee(const std::string &name, const std::string &department, const std::string &password);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getDepartment() const;

    void setDepartment(const std::string &department);

    const std::string &getPassword() const;

    void setPassword(const std::string &password);

    virtual void toString();

    virtual ~Employee();

     virtual bool isquatified();

};


#endif //TOETS_EMPLOYEE_H
