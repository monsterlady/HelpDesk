//
// Created by xurui on 2020/1/29.
//

#ifndef TOETS_HARDWARETICKET_H
#define TOETS_HARDWARETICKET_H


#include "Ticket.h"
#include "HelpDeskEmployee.h"

class HardWareTicket : public Ticket {
    unsigned int computerId;

public:
    HardWareTicket(const std::string &descriptions, const std::shared_ptr<Employee> &creator, unsigned int computerId);

    unsigned int getComputerId() const;

    void setComputerId(unsigned int computerId);

    void output() override;

};


#endif //TOETS_HARDWARETICKET_H
