//
// Created by Steven on 14/01/2020.
//

#ifndef TOETS_ADMIN_H
#define TOETS_ADMIN_H


#include <vector>
#include "Employee.h"
#include "Ticket.h"

class Admin {
private:
    std::vector<Employee*> employees;
    std::vector<Ticket*> tickets;

public:
    Admin();

    void printAllEmployees();

    void printAllTickets();

    void addEmployee(Employee *employee);

    void addTicket(Ticket *ticket);

    void readFile(std::string fileName);

    Employee* getEmployeeByName(const std::string &name);
};


#endif //TOETS_ADMIN_H
