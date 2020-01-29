//
// Created by xurui on 2020/1/29.
//

#ifndef TOETS_SOFTWARETICKET_H
#define TOETS_SOFTWARETICKET_H


#include "Ticket.h"

class SoftWareTicket : public Ticket {
    std::string nameOfApplication;

public:
    SoftWareTicket(const std::string &descriptions, const std::shared_ptr<Employee> &creator,
                   const std::string &nameOfApplication);

    const std::string &getNameOfApplication() const;

    void setNameOfApplication(const std::string &nameOfApplication);

    void output() override;

};


#endif //TOETS_SOFTWARETICKET_H
