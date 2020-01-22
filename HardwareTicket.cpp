//
// Created by Steven on 15/01/2020.
//

#include <iostream>
#include "HardwareTicket.h"

HardwareTicket::HardwareTicket(std::string date, Employee *creator, std::string description, int hardwareCode)
                               : Ticket(date, creator, description), hardwareCode(hardwareCode) {}

void HardwareTicket::print(){
    std::cout << "Id:"<< id << " Date:" << date << " Creator:" << creator->getName()
              << " Description:" << description << " HardwareCode:" << hardwareCode;
    if (!this->solved){
        std::cout << " Solver: null Message: null" << "\n";
    } else{
        std::cout << " Solver:" << solver->getName() << " Message:" << message << "\n";
    }
}