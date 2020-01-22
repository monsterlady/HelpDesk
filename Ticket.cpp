//
// Created by Steven on 14/01/2020.
//

#include "Ticket.h"
#include "iostream"

int Ticket::idToAssign = 1;


Ticket::Ticket(std::string date, Employee *creator, std::string description) :
id(Ticket::idToAssign++), date(date), creator(creator), description(description), solver(new HelpdeskEmployee("","","")), message(""), solved(false) {}

void Ticket::SolveTicket(HelpdeskEmployee *solver, std::string message){
    if (!solved) {
        this->solver = solver;
        this->message = message;
        this->solved = true;
    }
}

void Ticket::print() {
    std::cout << "Id:"<< id << " Date:" << date << " Creator:" << creator->getName()
    << " Description:" << description << "\n";
}

void Ticket::setMessage(const std::string &message) {
    Ticket::message = message;
}
