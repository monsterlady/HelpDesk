//
// Created by Steven on 15/01/2020.
//

#ifndef TOETS_SOFTWARETICKET_H
#define TOETS_SOFTWARETICKET_H


#include <string>
#include "Ticket.h"

class SoftwareTicket : public Ticket{
private:
    std::string software;

public:
    SoftwareTicket(std::string date, Employee *creator, std::string description, std::string software);

    void print() override;
};


#endif //TOETS_SOFTWARETICKET_H
