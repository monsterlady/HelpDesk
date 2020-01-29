//
// Created by xurui on 2020/1/29.
//

#include <iostream>
#include "SoftWareTicket.h"

SoftWareTicket::SoftWareTicket(const std::string &descriptions, const std::shared_ptr<Employee> &creator,
                               const std::string &nameOfApplication) : Ticket(descriptions, creator),
                                                                       nameOfApplication(nameOfApplication) {}

const std::string &SoftWareTicket::getNameOfApplication() const {
    return nameOfApplication;
}

void SoftWareTicket::setNameOfApplication(const std::string &nameOfApplication) {
    SoftWareTicket::nameOfApplication = nameOfApplication;
}

void SoftWareTicket::output() {
    std::cout << "Ticket : " << getId() << " Type :  SoftWareTicket" << " ComputerId : " << getNameOfApplication() << std::endl;
    Ticket::output();
}


