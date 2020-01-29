//
// Created by xurui on 2020/1/29.
//

#include <fstream>
#include "Administrator.h"

void Administrator::addEmployee(std::shared_ptr<Employee> nwemployee) {
    for(auto const &i: employees) {
        if(i->getName() == nwemployee->getName())
            throw std::runtime_error("Employee already exists");
    }
   employees.push_back(nwemployee);
}

void Administrator::addTicket(std::shared_ptr<Ticket> nwTicket) {
    /*for(auto const &i: tickets) {
        if(i->getId() == nwTicket->getId())
            throw std::runtime_error("Ticket already exists");
    }*/
    nwTicket->setId(getNextTicketId());
    tickets.push_back(nwTicket);
}

void Administrator::readData() {
    std::ifstream myfile("input.txt");
    while (true){
        std::string name;
        std::string password;
        std::string department;

        myfile >> name >> password >> department;
        if(myfile.eof())
            return;
        if(myfile.fail())
            throw std::runtime_error("Input file has an error");

        addEmployee(std::make_shared<Employee>(name,department,password) );

    }

}

std::shared_ptr<Employee> Administrator::getEmployeeByName(std::string const &name) {
    for(auto const &employee : employees){
        if(employee->getName() == name){
            return employee;
        }
    }
    throw std::runtime_error(std::string("Employee with name : ") +  name + " does not exist");
}

std::shared_ptr<Ticket> Administrator::getTiketById(unsigned int id) {
    for(auto const &i: tickets) {
        if(i->getId() == id)
            return i;
    }
    throw std::runtime_error(std::string("Ticket with Id : ") +  std::to_string(id) + " does not exist");
}

void Administrator::printEmployee() {
    for (auto const &i: employees) {
        i->toString();
        std::cout << std::endl;
    }
}

void Administrator::printTickets() {
    for (auto const &i: tickets) {
        i->output();
        std::cout << std::endl;
    }
}

void Administrator::solveTicket(std::shared_ptr<Employee> slover, std::shared_ptr<Ticket> ticket,
                                std::string const $solution) {
    if(!slover->isquatified()){
        throw std::runtime_error( slover->getName() + " has no authroization to solve ticket");
    }
    ticket->setStatus(false);
    ticket->setSolution($solution);
    ticket->setSlover(slover);
}


