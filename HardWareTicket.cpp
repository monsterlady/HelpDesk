//
// Created by xurui on 2020/1/29.
//

#include <iostream>
#include "HardWareTicket.h"

HardWareTicket::HardWareTicket(const std::string &descriptions, const std::shared_ptr<Employee> &creator,
                               unsigned int computerId) : Ticket(descriptions, creator), computerId(computerId) {}

unsigned int HardWareTicket::getComputerId() const {
    return computerId;
}

void HardWareTicket::setComputerId(unsigned int computerId) {
    HardWareTicket::computerId = computerId;
}

void HardWareTicket::output() {
    std::cout << "Ticket : " << getId() << " Type :  HardWareTicket" << " ComputerId : " << getComputerId() << std::endl;
    Ticket::output();
}





