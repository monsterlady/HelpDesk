//
// Created by xurui on 2020/1/29.
//

#include <iostream>
#include "Ticket.h"

Ticket::Ticket(const std::string &descriptions, const std::shared_ptr<Employee> &creator): descriptions(descriptions),creator(creator){
status = true;
}

unsigned int Ticket::getId() const {
    return id;
}

void Ticket::setId(unsigned int id) {
    Ticket::id = id;
}

const std::string &Ticket::getDescriptions() const {
    return descriptions;
}

void Ticket::setDescriptions(const std::string &descriptions) {
    Ticket::descriptions = descriptions;
}

const std::shared_ptr<Employee> &Ticket::getCreator() const {
    return creator;
}

void Ticket::setCreator(const std::shared_ptr<Employee> &creator) {
    Ticket::creator = creator;
}

const std::string &Ticket::getSolution() const {
    return solution;
}

void Ticket::setSolution(const std::string &solution) {
    Ticket::solution = solution;
}

const std::shared_ptr<Employee> &Ticket::getSlover() const {
    return slover;
}

void Ticket::setSlover(const std::shared_ptr<Employee> &slover) {
    Ticket::slover = slover;
}

bool Ticket::isStatus() const {
    return status;
}

void Ticket::setStatus(bool status) {
    Ticket::status = status;
}

Ticket::~Ticket() {

}











