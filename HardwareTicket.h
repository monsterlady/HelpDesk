//
// Created by Steven on 15/01/2020.
//

#ifndef TOETS_HARDWARETICKET_H
#define TOETS_HARDWARETICKET_H


#include "Ticket.h"

class HardwareTicket : public Ticket{
private:
    int hardwareCode;
public:
    HardwareTicket(std::string date, Employee *creator, std::string description, int hardwareCode);

    void print() override;
};


#endif //TOETS_HARDWARETICKET_H
