//
// Created by xurui on 2020/1/29.
//

#ifndef TOETS_ADMINISTRATOR_H
#define TOETS_ADMINISTRATOR_H


#include <vector>
#include <memory>
#include "Employee.h"
#include "Ticket.h"
#include "HelpDeskEmployee.h"


class Administrator {
    std::vector<std::shared_ptr<Employee>> employees;
    std::vector<std::shared_ptr<Ticket>> tickets;
    unsigned int next_ticket_id = 0;
public:
    unsigned int getNextTicketId() {
        next_ticket_id++;
        return next_ticket_id;
    };

    void addEmployee(std::shared_ptr<Employee> nwemployee);

    void addTicket(std::shared_ptr<Ticket> nwTicket);

    void readData();

    std::shared_ptr<Employee> getEmployeeByName(std::string const &name );

    std::shared_ptr<Ticket> getTiketById(unsigned int id);

    void printEmployee();

    void printTickets();

    void solveTicket(std::shared_ptr<Employee> slover ,std::shared_ptr<Ticket> ticket,std::string const $solution);

};


#endif //TOETS_ADMINISTRATOR_H
