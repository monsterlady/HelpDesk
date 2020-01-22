//
// Created by Steven on 14/01/2020.
//

#include <iostream>
#include <fstream>
#include "Admin.h"

Admin::Admin() {}

void Admin::printAllEmployees(){
    for (int i = 0; i < employees.size(); ++i) {
        employees[i]->print();
    }
}

void Admin::printAllTickets(){
    for (int i = 0; i < tickets.size(); ++i) {
        tickets[i]->print();
    }
}

void Admin::addEmployee(Employee *employee){
    employees.push_back(employee);
}

void Admin::addTicket(Ticket *ticket) {
    tickets.push_back(ticket);
}

void Admin::readFile(std::string fileName){
    std::ifstream input(fileName);
    while(true){
        std::string name;
        std::string password;
        std::string department;
        input >> name;
        if (input.eof()){
            break;
        }
        if (input.fail()){
            throw std::runtime_error("Failed to parse file");
        }
        input >> password;
        if (input.eof()){
            break;
        }
        if (input.fail()){
            throw std::runtime_error("Failed to parse file");
        }
        input >> department;
        if (input.fail()){
            throw std::runtime_error("Failed to parse file");
        }
        Employee *employee = new Employee(name, password, department);
        addEmployee(employee);
    }
}

Employee* Admin::getEmployeeByName(const std::string& name){
    for (int i = 0; i < employees.size(); ++i) {
        if (employees[i]->getName() == name){
            return employees[i];
        }
    }
}