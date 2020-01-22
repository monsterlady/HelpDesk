//
// Created by Steven on 15/01/2020.
//

#include <iostream>
#include "SoftwareTicket.h"

SoftwareTicket::SoftwareTicket(std::string date, Employee *creator, std::string description, std::string software) :
Ticket(date, creator, description), software(software) {}

void SoftwareTicket::print(){
    std::cout << "Id:"<< id << " Date:" << date << " Creator:" << creator->getName()
              << " Description:" << description << " Software:" << software;
    if (!this->solved){
        std::cout << " Solver: null Message: null" << "\n";
    } else{
        std::cout << " Solver:" << solver->getName() << " Message:" << message << "\n";
    }
}