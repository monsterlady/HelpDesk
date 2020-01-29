//
// Created by xurui on 2020/1/29.
//

#ifndef TOETS_HELPDESKEMPLOYEE_H
#define TOETS_HELPDESKEMPLOYEE_H


#include <memory>
#include "Employee.h"
#include "Ticket.h"

class HelpDeskEmployee : public Employee {
    std::string expertise;

public:
    HelpDeskEmployee(const std::string &name, const std::string &department, const std::string &password,
                     const std::string &expertise);

    const std::string &getExpertise() const;

    void setExpertise(const std::string &expertise);

    void toString() override;

    ~HelpDeskEmployee() override;

    bool isquatified() override;

};


#endif //TOETS_HELPDESKEMPLOYEE_H
