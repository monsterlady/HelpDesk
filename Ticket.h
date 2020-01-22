//
// Created by Steven on 14/01/2020.
//

#ifndef TOETS_TICKET_H
#define TOETS_TICKET_H

#include "string"
#include "Employee.h"
#include "HelpdeskEmployee.h"

class Ticket {
protected:
    static int idToAssign;
    int id;
    std::string date;
    Employee* creator;
    std::string description;
    HelpdeskEmployee* solver;
    std::string message;
    bool solved;
public:
    Ticket(std::string date, Employee *creator, std::string description);

    void SolveTicket(HelpdeskEmployee *solver, std::string message);

    virtual void print();

    void setMessage(const std::string &message);
};


#endif //TOETS_TICKET_H
